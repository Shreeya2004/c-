#include<iostream>
using namespace std;
class Animal{
	public:
		void eat(){
			cout<<"the animal is eating";
		}
};


class Dog:public Animal{
	public:
		void bark(){
			cout<<"the dog barks";
		}
};

class Cat:public Dog{
	public:
		void meow(){
			cout<<"the cat meowwss";
		}
};
int main(){
	Dog shinto;
	Cat donut;
	Animal animal;
	donut.bark();
	
}


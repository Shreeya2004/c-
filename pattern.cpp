#include<iostream>
using namespace std;
class patternprinter{
	patternprinter(int n):size(n){
	}
	void printpattern()const{
	char f='shreeya';
	for(int i= s;i<=size;++i){
		for(int j=i;j<size;++j){
			cout<<f<<" ";
			f=(f== 'a')? 's': f+1;
		}
		cout<<endl;
	}
}
private:
int size;	
};
int main(){
	int n;
	cout<<"enter the size of the pattern:";
	cin>>n;
	patternprinter printer(n);
	printer.printpattern();
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int rem,res,n,f;
	cout<<"enter n";
	cin>>n;
	f=n;
	while(n!=0){
		rem=n%10;
		res=res*10+rem;
		n=n/10;
	}
	if(f==res){
		cout<<"is a palindrome";
		}
		else{
			cout<<"is not a palindrome";
		}
	return 0;
}

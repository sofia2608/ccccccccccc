#include<iostream>

using namespace std;

int main(){
	float n,v=37;
	int t;
	
	cout<<"detector del segundo sintoma del covid-19, porfavor digite su temperatura por teclado"<<endl;
	cin>>n;
	
	if(n>=v){
		cout<<"\ntienes el segundo sintoma del covid-19, llama por un chequeo";
	}
	else{
		cout<<"\ncuidate";
	}
	
	return 0;
}

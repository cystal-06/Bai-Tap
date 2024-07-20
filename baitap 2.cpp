#include <iostream>
using namespace std;
int main(){
	int a=1;
	for(int i=1;i<=7;i++){
		cout<<"* ";
	}
	cout<<endl;
	for(int i=2;i<7;i++){
		for(int b=1;b<=7;b++){
		if(b==1||b==i||b==7){
			cout<<"* ";
		}else {cout<<"  ";
		}		
}
cout<<endl;}
	for(int i=1;i<=7;i++){
		cout<<"* ";
	}
	return 0;
} 

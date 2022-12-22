#include<iostream>
using namespace std;
int isPerfect(int x)
{int sum=0,i;
	for(i=1;i<x;i++){
		if(x%i==0){
		sum+=i;	
		}
	}
	if(sum==x)return true;
	else return false; 
}
int main(){
	for(int i=1;i<=10000;i++)
	{
		if(isPerfect(i))
		cout<<i<<"\n";
	}
	return 0;
}

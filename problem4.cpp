#include<iostream>
using namespace std;
int medianofThree(int a,int b,int c){
	if(a>b&&b>c||c>b&&b>a)
	return b;
	else if(b>a&&a>c||c>a&&a>b)
	return a;
	else
	return c;
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	cout<<medianofThree(a,b,c);
	return 0;
}

#include<iostream>
using namespace std;
bool isCollinear(int a1,int b1,int a2,int b2,int a3,int b3){
	int s1,s2,s3;
	s1=(a2-a1)/(b2-b1);
	s2=(a3-a2)/(b3-b2);
	s3=(a1-a3)/(b1-b3);
	if(s1==s2||s2==s3||s3==s1)
	return true;
	else return false;
}
int main(){
	int x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	cout<<isCollinear(x1,y1,x2,y2,x3,y3);
	return 0;
}

#include<iostream>
#include<math.h>
using namespace std;
int arbitary_to_dec(int n,int arb){
	int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(arb, i);
    ++i;
}
return dec;
}
int dec_to_arbitary(int y,int arb){
	long long bin = 0;
  int rem, i = 1;

  while (y!=0) {
    rem = y % arb;
    y /= arb;
    bin += rem * i;
    i *= 10;
  }

  return bin;
}
int convertBase(int b1,int b2,int x)
{
	if(b1==10&&b2>=2||b2<=16&&b2!=10)
	return dec_to_arbitary(x,b2);
	else if(b2==10&&b1>=2||b1<=16&&b1!=10)
	return arbitary_to_dec(x,b1);
	else{
		int t1,t2;
		t1=arbitary_to_dec(x,b1);
		t2=dec_to_arbitary(t1,b2);
		return t2;
	}
}
int main(){
	int base1,base2,num;
	cin>>base1>>base2>>num;
	cout<<convertBase(base1,base2,num);
	return 0;
}

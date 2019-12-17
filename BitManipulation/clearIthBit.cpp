// Clear Ith bit to zero

#include<iostream>
using namespace std;
int ClearIthBit(int n,int i){
	n=n&(~(1<<i));
	return n;
}

int main()
{
	int n,i;
	cin>>n>>i;
	cout<<ClearIthBit(n,i);

	return 0;
}

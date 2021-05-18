#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,count=0;
	cout<<"enter number";
	cin>>num;
	while(num!=0)
	{
		if(num&1==1)
			count++;
		num=num>>1;
	}
	cout<<"no of set bits in given number"<<count;
}

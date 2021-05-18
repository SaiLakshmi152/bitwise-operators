#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,pos,res;//count=0;
	cout<<"enter number and position";
	cin>>num;
	cin>>pos;
	res=(num^(1<<(pos-1)));
	cout<<"result"<<res;
}

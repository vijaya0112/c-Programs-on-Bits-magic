#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	int pos;
	cin>>num>>pos;
	if(num&((pos-1)<<1))
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	return 0;	
}

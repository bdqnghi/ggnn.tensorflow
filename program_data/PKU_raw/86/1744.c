//============================================================================
// Name        : 13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


int main() {
	int n;
	cin>>n;
	int x[10],m,a[200];
	for(int i=0;i<n;i++)
	{
		cin>>m;
		for(int i=0;i<m;i++)
			cin>>x[i];
		x[m]=60;//?????60?
		memset(a,0,400);
		int num=-3,sum=0;
		for(int i=0;i<=m;i++)
			for(num+=3;sum<x[i];sum++,num++)//????????????1
				a[num]=1;
		int sum2=0;for(int i=0;i<60;i++)//????
			sum2+=a[i];
		cout<<sum2<<endl;
	}
	return 0;
}

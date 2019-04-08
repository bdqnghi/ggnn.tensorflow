//============================================================================
// Name        : Homework.cpp
// Author      : ???
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


int main()
{
	int n,d,sum=0;
	char r;
	cin>>n;
	int a[n+2][n+2];
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			cin>>r;
			switch(r)
			{
			case '.':
				a[i][j]=1;
				break;
			case '@':
				a[i][j]=100;
				break;
			default:
				break;
			}
		}
	cin>>d;
	for(int day=1;day<d;day++)
	{
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if(a[i][j]>=100)
				{
					a[i-1][j]*=2;
					a[i+1][j]*=2;
					a[i][j-1]*=2;
					a[i][j+1]*=2;
				}
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if(a[i][j]>=2)
					a[i][j]=100;
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(a[i][j]>1)
				sum++;
	cout<<sum<<endl;
	return 0;
}

// test.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"

const int dx[4]={0,-1,1,0};
const int dy[4]={-1,0,0,1};
int main()
//int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	char a[100][100];
	cin>>n;
	for (int i=0;i<n;i++)
		for(int j=0;j<n;j++)
	{
		cin>>a[i][j];
	}
	int m;
	cin>>m;
	for (int t=0;t<m-1;t++)
	{
		for (int i=0;i<n;i++)
			for(int j=0;j<n;j++)
		{
			if (a[i][j]=='@')
				for (int k=0;k<4;k++)
				{
					if ((i+dx[k]<n)&&(i+dx[k]>=0)&&(j+dy[k]<n)&&(j+dy[k]>=0)&&(a[i+dx[k]][j+dy[k]]=='.'))
						a[i+dx[k]][j+dy[k]]='N';
				}
		}
		for (int i=0;i<n;i++)
			for(int j=0;j<n;j++)
			{if (a[i][j]=='N') a[i][j]='@';}
	}
	int sum=0;
	for (int i=0;i<n;i++)
		for(int j=0;j<n;j++)
	{
		if (a[i][j]=='@') sum++;
		}
		cout<<sum<<endl;
}


// ????.cpp : ??????????????
//
//#include "stdafx.h"

const int minn=-10000;
int main()
//int _tmain(int argc, _TCHAR* argv[])
{
	int a[100][100];
	int m,n,sum=0;
	cin>>m>>n;
	for (int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
		{
			cin>>*(*(a+j)+i);
		}
	for(int i=1;i<=n;i++)
	{
		**(a+i)=minn;
		*(*(a+i)+m+1)=minn;
	}
	for(int i=1;i<=m;i++)
	{
		*(*a+i)=minn;
		*(*(a+n+1)+i)=minn;
	}

	for (int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
		{
			if(*(*(a+j-1)+i)-*(*(a+j)+i)<=0&&*(*(a+j+1)+i)-*(*(a+j)+i)<=0&&*(*(a+j)+i-1)-*(*(a+j)+i)<=0&&*(*(a+j)+i+1)-*(*(a+j)+i)<=0)
			cout<<i-1<<' '<< j-1<<endl;
		}
		
	return 0;
}


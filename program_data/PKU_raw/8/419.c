int paixu(int n,int m)
{
	int i,j,num;
	int shuzu[1000];
	for(i=1;i<=n+m;i++)
	{
		cin>>num;
		shuzu[i]=num;
	}
	for(i=1;i<=n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			if(shuzu[j]>shuzu[j+1])num=shuzu[j],shuzu[j]=shuzu[j+1],shuzu[j+1]=num;
		}
	}
	for(i=n+1;i<=n+m;i++)
	{
		for(j=n+m-1;j>=i;j--)
		{
			if(shuzu[j]>shuzu[j+1])num=shuzu[j],shuzu[j]=shuzu[j+1],shuzu[j+1]=num;
		}
	}
	for(i=1;i<=n+m;i++)
	{
		if(i==m+n)cout<<shuzu[i];
		else cout<<shuzu[i]<<" ";
	}
	return 0;
}
int main ( )
{
	int n1,n2;
	cin>>n1>>n2;
	paixu(n1,n2);
	return 0;
}
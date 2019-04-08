int main()
{
	int n,k;
	while(cin>>n>>k)
	{
		int a[100]={0};
		a[1]=1;
		int flag=-1;
		//?????for????????????????while???????? 
		while(flag!=1)//flag=-1??? flag=0 ???? flag=1 ????????? 
		{
			for(int i=2;i<=n+1;i++)
			{
				if(a[i-1]%(n-1)==0)
				{
					a[i]=a[i-1]*n/(n-1)+k;
					if(i==n+1)
					flag=1;
				}
				else
				{
					flag=0;
					break;
				}
			}
			if(flag==0)
			a[1]++;
			}
			cout<<a[n+1]<<endl; 
	}
	return 0;
}

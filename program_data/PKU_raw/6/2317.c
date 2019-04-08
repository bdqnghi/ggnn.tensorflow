int main()
{
	int N=0,n=0,m=0,i=0,j=0,k=0;
	cin>>N;
	for(i=0;i<N;i++)
	{
		int sum=0;
		int a[102][102];
		int *p=*a;
		cin>>n>>m;
		for(j=0;j<n;j++)
		{
			for(k=0;k<m;k++)
			{
				cin>>a[j][k];
			}
		}
		for(k=0;k<m;k++,p++)
		 sum=sum+*p;
		for(p=p+101,j=1;j<n;j++)
			sum=sum+*p,p=p+102;
		for(p=p-103,k=m-2;k>=0;k--,p--)
			sum=sum+*p;
		for(p=p-101,j=n-2;j>0;j--,p=p-102)
			sum=sum+*p;
		cout<<sum<<endl;
	}
	return 0;
}
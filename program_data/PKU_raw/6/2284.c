int main()
{
	int k,m,n;
	cin>>k;
	while(k>0)
	{
		cin>>m>>n;
		int num[110][110]={0},(*p)[110],sum=0,i,j;
		p=num;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>*(*(p+i)+j);
			}
		}
		p=num;
		for(j=0;j<n;j++)
			sum=sum+*(*p+j);
		for(i=1;i<m;i++)
			sum=sum+*(*(p+i)+n-1);
		for(j=0;j<n-1;j++)
			sum=sum+*(*(p+m-1)+j);
		for(i=1;i<m-1;i++)
			sum=sum+*(*(p+i)+0);
		cout<<sum<<endl;
		k--;
	}
		return 0;
}




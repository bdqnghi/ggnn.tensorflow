int main()
{
	int k=0,m=0,n=0,a[500][500]={0},(*p)[500];
	cin>>k;
	int i=0,j=0;
	p = a;
	for(int l=0;l<k;l++)
	{
		cin>>m>>n;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>*(*(p+i)+j);
			}
		}
		int result=0;
		p=a;
		for(i=0;i<m;i++)
			result=result+*(*(p+i));
		p=a;
		for(i=0;i<m && n != 1;i++)
			result=result+*(*(p+i)+n-1);
		p=a+m-1;
		for(i=1;i<n-1;i++)
			result=result+*(*p+i);
		p=a;
		for(i=1;i<n-1;i++)
			result=result+*(*p+i);
		cout<<result<<endl;
	}
	
	return 0;
}
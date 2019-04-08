
int  main()
{
	int n,a[102][102]={0},sum=0;
	cin>>n;
	

	int i,j,k,cc;
	for(i=0;i<n;i++)
	{sum=0;
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=n;k++)
			{
				cin>>*(*(a+j)+k);
			}
		}
		cc=n;







		while(cc>1)
		{
		int min=10000;
		for(j=1;j<=cc;j++)
		{
			for(k=1;k<=cc;k++)
		{
			if(min>*(*(a+j)+k)) min=*(*(a+j)+k);
		}
			for(k=1;k<=cc;k++)
			{
				*(*(a+j)+k)=*(*(a+j)+k)-min;
			}
			min=10000;
		}
		min=10000;
        for(j=1;j<=n;j++)
		{
			for(k=1;k<=cc;k++)
		{
			if(min>*(*(a+k)+j)) min=*(*(a+k)+j);
		}
			for(k=1;k<=cc;k++)
			{
				*(*(a+k)+j)=*(*(a+k)+j)-min;
			}
			min=10000;
		}
         sum+=*(*(a+2)+2);
		 
		for(j=3;j<=cc;j++)
		{
			for(k=1;k<=cc;k++)
		{
				*(*(a+j-1)+k)=*(*(a+j)+k);
			}
		}
		for(j=1;j<=cc;j++)
		{
			for(k=3;k<=cc;k++)
			{
				*(*(a+j)+k-1)=*(*(a+j)+k);
			}
		}
		cc--;
		}
		cout<<sum<<endl;
	}
	return 0;
}







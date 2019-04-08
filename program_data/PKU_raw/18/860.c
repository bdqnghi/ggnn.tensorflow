int main()
{
	int n;
	int i,j,k;
	int q;
	int a[110][110];
	int (*p)[110]=a;
	cin>>n;
	q=n;
	for(k=1;k<=q;k++)
	{
		int sum=0;
		n=q;
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				cin>>*(*(p+i)+j);
		while(1)
		{
			if(n==1)break;
		int min=0;
		for(i=1;i<=n;i++)
		{
			min=9999999;
			for(j=1;j<=n;j++)
				if(min>*(*(p+i)+j))min=*(*(p+i)+j);
			for(j=1;j<=n;j++)
				*(*(p+i)+j)-=min;
		}
		for(i=1;i<=n;i++)
		{
			min=9999999;
			for(j=1;j<=n;j++)
				if(min>*(*(p+j)+i))min=*(*(p+j)+i);
			for(j=1;j<=n;j++)
				*(*(p+j)+i)-=min;
		}
		sum+=a[2][2];
		for(i=2;i<=n-1;i++)
			for(j=2;j<=n-1;j++)
				*(*(p+i)+j)=*(*(p+i+1)+j+1);
		for(i=2;i<=n-1;i++)
		{
			*(*(p+1)+i)=*(*(p+1)+i+1);
			*(*(p+i)+1)=*(*(p+i+1)+1);
		}
		n--;
		}
		cout<<sum<<endl;
	}


	return 0;
}
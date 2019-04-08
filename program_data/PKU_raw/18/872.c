int main()
{
	int n,a[110][110],i,j,x,min=10000,sum=0,k;
	int (*p)[110]=a;
	cin>>x;
for (k=1;k<=x;k++){sum=0;
	for (i=1;i<=x;i++)
	 for (j=1;j<=x;j++)
	  cin>>*(*(p+i)+j);
for (n=x;n>=2;n--)
{
	for (i=1;i<=n;i++)
	{
		min=100000;
	 for (j=1;j<=n;j++)
	 {
		 if (*(*(p+i)+j)<min)
			 min=*(*(p+i)+j);
	 }
	 for (j=1;j<=n;j++)
		 *(*(p+i)+j)=*(*(p+i)+j)-min;
	}
	 for (j=1;j<=n;j++)
	 {
	 min=100000;
	 for (i=1;i<=n;i++)
	 {
		 if (*(*(p+i)+j)<min)
			 min=*(*(p+i)+j);
	  }
	  for (i=1;i<=n;i++)
		  *(*(p+i)+j)=*(*(p+i)+j)-min;
	 }
	 sum=sum+*(*(p+2)+2);
	 for (i=2;i<=n-1;i++)
	  for (j=1;j<=n;j++)
	  {
		  *(*(p+i)+j)=*(*(p+i+1)+j);
	  }
	 for (j=2;j<=n-1;j++)
	  for (i=1;i<=n;i++)
	  {
		  *(*(p+i)+j)=*(*(p+i)+j+1);
	  }
}
cout<<sum<<endl;
}
}
main()
{
	int a[100],n,k,m;
	int i=0,j=1,r,t=1;
	scanf("%d%d",&n,&k);
	do
	{
		if(t==0)
		{
			i=0;
			t=1;
		}
		a[0]=n*j+k;
		a[i+1]=n*a[i]/(n-1)+k;
		r=(a[i]*n)%(n-1);
		if(r!=0)
		{
			j++;
			t=0;
		}
		i++;
	}while(i<n);
	m=a[n-1];
	printf("%d",m);
}  
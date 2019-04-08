int pfC(const void *x ,const void *y)
{
    int t;
    t=*((int*)x)-*((int*)y); 
    return -t;
}
main()
{
	int n,t,i,j,a[25],b[25];
	scanf("%d",&n);
	//int*a=(int*)malloc(n*sizeof(int));
	//int*b=(int*)malloc(n*sizeof(int));

	for(int k=0;k<n;k++)
	{
		scanf("%d",&a[k]);
		b[k]=0;
	}
	b[n-1]=1;
	for(i=n-2;i>=0;i--)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>=a[j])
			{
				if(b[i]<b[j])
				{
					b[i]=b[j];
				}
			}
		}
		b[i]++;
	}
    qsort(b,n,sizeof(int),pfC); 
	printf("%d",b[0]);
}

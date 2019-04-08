int main()
{
	int i,j;
	int n,m;
	scanf("%d%d",&n,&m);
	int *a=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);//a[i]====*a+i;
	}
	int t,t1;
	for(j=0;j<m;j++)
	{t=a[n-1];
		for(i=0;i<n;i++)
		{
			
			t1=a[i];
			a[i]=t;
			t=t1;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		if(i<n-1)printf(" ");
	}
	return 0;
}

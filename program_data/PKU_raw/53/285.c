int main()
{
	int i,j,t=0,r=0,n,e=0;
	int a[100];
	int b[100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=n-1;i>0;i--)
	{
		e=0;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j]) e=1;
		}
		if(e==0)
		{
			b[t]=a[i];
		    t=t+1;
		    r=t;
		}
	}
	printf("%d",a[0]);
		for(t=r-1;t>=0;t--)
		{
		 printf(",%d",b[t]);
		}
		printf("\n");
		return 0;
}

void main()
{
	int m,n,i,j,k,a[2000];
	scanf("%d",&m);
	k=0;
	for(i=2,n=0;i<=m;i++)
	{
		n=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				n=n+1;
			}
		}
		if(n==0)
		{
			a[k]=i;
			k++;
		}
	}
	if(k==0 || k==1 || k==2) printf("empty\n");
	else
	{
		for(i=0;i<k-1;i++)
		{
			if(a[i+1]-a[i]==2)
			{
				printf("%d %d\n",a[i],a[i+1]);
			}
		}
	}
}
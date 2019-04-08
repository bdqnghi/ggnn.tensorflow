void main()
{
	int n,i,j,k;
	int a[10000];

	scanf("%d",&n);
	for(i=3,k=0;i<=n;i++)
	{
		for(j=2;j<i;j++)
			if(i%j==0)
				break;
		if(i<=j)
		{a[k]=i;k++;}

	}

	for(i=0,j=0;i<k;i++)
	if(a[i+1]-a[i]==2)
	{printf("%d %d\n",a[i],a[i+1]);j++;}
if(j==0)
		printf("empty");
}
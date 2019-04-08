void main()
{
	int n,i,j,k,a[10000]={0},*p;
	scanf("%d",&n);
    p=a;
	for(i=3;i<=n;i=i+2)
	{
		for(j=3;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(j==i)
		{
			*p=i;
			p++;
		}
	}
	k=p-a;
	for(i=1;i<k;i++)
	{
		if(a[i]==a[i-1]+2)
			printf("%d %d\n",a[i-1],a[i]);
	}
	if(a[1]==0)
		printf("empty");
}

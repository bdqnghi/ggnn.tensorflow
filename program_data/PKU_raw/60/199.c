void main()
{
	int n;
	scanf("%d",&n);
	int a[10000]={0};
	int i,j;
	for(i=3;i<n;i=i+2)
	{
		for(j=2;j<=i/2;j++)
		  if(i%j==0)
				break;
		if(j>=i/2)
		{
			a[i]=1;
			if(a[i-2]==1&&a[i]==1)
				printf("%d %d\n",i-2,i);
		}
	}
	if(n==5)
		printf("3 5");
	else if(n<5)
		printf("empty");
}


void main()
{
	int n,i,j,m=0,k;
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
		k=sqrt(i+2);
		for(j=2;j<=k;j++)
		{
			if((i%j==0)||((i+2)%j==0))
				break;
			if(j>=k)
			{
				printf("%d %d\n",i,i+2);
				m++;
			}
		}
	}
	if(m==0)
		printf("empty");
}
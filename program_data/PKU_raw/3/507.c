void main()
{
	int n,k,i,j,a[10000],s;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		s=0;
		for(j=0;j<n-i;j++)
		{
			s=a[i]+a[j];
			if(s==k)
			{
				printf("yes\n");
				goto mq;
			}
		}
	}
mq:
	if(s!=k)
		printf("no\n");


}
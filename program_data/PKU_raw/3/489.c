void main()
{
	int n,k,i,j,p=0;
	int a[1000];
	scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if((a[i]+a[j])==k)
			{
				p=1;
				break;
			}
		}
		if(p==1)
			break;
	}
			if(p==1)
				printf("yes");
			else
				printf("no");
}
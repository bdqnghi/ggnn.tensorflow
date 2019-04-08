int main()
{
	int n,k,i,j,s=0;
	int a[1000];

	scanf("%d %d",&n,&k);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i!=0)
		{
			for(j=0;j<i;j++)
			{
				if(k==(a[j]+a[i]))
				{
					s=1;
				}
			}
		}
	}

	if(s==1)
		printf("yes");
	if(s!=1)
		printf("no");

	return 0;
	
}

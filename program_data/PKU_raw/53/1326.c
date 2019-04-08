void main()
{
	int a[300];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
		if(i==0)printf("%d",a[i]);
		else 
		{
			for(j=0;j<i;j++)
			{
				if(a[j]==a[i])break;
			}
			if(i==j)printf(",%d",a[i]);
		}
	}
}
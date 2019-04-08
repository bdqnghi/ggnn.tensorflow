int main()
{
	int k,n,i,j;
	scanf("%d%d",&n,&k);
	int*a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int flag=0;
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]+a[j]==k)
			{
				flag=1;
				break;
			}
		}
		if(flag==1) break;
	}
	if(flag==1) printf("yes\n");
	if(flag==0) printf("no\n");
	return 0;
}
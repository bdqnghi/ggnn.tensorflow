int main()
{
    int i,j,n,k,f;
	int a[1000];

	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	f=1;

	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(i!=j)
			    if(a[i]+a[j]==k)
				{
				    f=0;
					break;
				}

	if(f)
		printf("no");
	else
		printf("yes");

	return 0;
}
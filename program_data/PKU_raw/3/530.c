void main()
{
	int n,k,m=0;
	int a[1000];
	int i,j;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=1;j<n-i;j++)
			if(a[i]+a[i+j]==k)
				m++;

    if(m)
		printf("yes");
	else
		printf("no");

}
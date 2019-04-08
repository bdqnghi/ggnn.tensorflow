void main()
{
	int n,k;
	int a[1000];
	int i,j;
	int num=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[i]+a[j]==k)
				num=num+1;
			if(num==0)
				printf("no\n");
			else
				printf("yes\n");
}
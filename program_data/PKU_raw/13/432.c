void main()
{
	int i,j,n;
	scanf("%d",&n);
	int a[20000];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("%d",a[0]);
	if(n>=2)
	{
		if(a[1]!=a[0])
		printf(" %d",a[1]);
	     for(i=2;i<n;i++)
		 {
		   if(a[i]!=a[0])
		   {
			   for(j=0;j<i-1;j++)
			   {
			   if(a[j]!=a[i])
				continue;
			   else
				break;
			   }
		       if(a[j]!=a[i])
			printf(" %d",a[i]);
		   }
		   else
			continue;
		 }
	}
}

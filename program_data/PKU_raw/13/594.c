void main()
{
	int n,i,j,k;
    int a[20000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{if(a[j]==a[i])
		a[j]=0;}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		k=i;
	}
	for(i=0;i<k;i++)
	{	if(a[i]!=0)
		printf("%d ",a[i]);}
	printf("%d",a[k]);
}

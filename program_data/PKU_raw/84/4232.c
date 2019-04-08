void main()
{
	int n,i=0,a[10000],max=0,may=0;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
			max=a[i];
		else if(a[i]>may)
			may=a[i];
		i++;
	}
	if(a[0]>may&&a[0]<max)
		may=a[0];
	printf("%d\n%d\n",max,may);
}
void main()
{
	int n,a[100],i,max=0,nmax=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d",&a[i]);}
	for(i=0;i<n;i++)
	{
		if(a[i]>max) max=a[i];}
	for(i=0;i<n;i++)
	{if(a[i]==max)
	a[i]=0;}
    for(i=0;i<n;i++)
	{
		if(a[i]>nmax) nmax=a[i];}
	printf("%d\n%d\n",max,nmax);
}
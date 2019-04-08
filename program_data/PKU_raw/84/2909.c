int main()
{
	int n,a[100],i,diyi,dier;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	scanf("%d",&a[i]);
	diyi=a[0];
	dier=a[1];
    for(i=1;i<=n-1;i++)
	{
		if(a[i]>=diyi)
		{
			dier=diyi;
		    diyi=a[i];
		}
		if(a[i]<diyi&&a[i]>=dier)
		dier=a[i];
	}
	printf("%d\n%d",diyi,dier);
	return 0;
}
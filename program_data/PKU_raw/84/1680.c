int main()
{
	int n,a[101],i,max,second;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{scanf("%d",&a[i]);}
	if(a[1]>a[2])
		{max=a[1];
		second=a[2];}
	else
		max=a[2];
		second=a[1];
	if(n<=2)
		{printf("%d\n",max);
		printf("%d\n",second);}
	else
	{	for(i=3;i<=n;i++)
		{	if(a[i]>max)
			{second=max;
			max=a[i];}
			else if(max>a[i]&&second<a[i])
				second=a[i];
		}
		printf("%d\n",max);
		printf("%d\n",second);}
	return 0;
}
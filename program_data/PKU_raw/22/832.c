int main()
{
	int i,n,a[300],min,max;
	char c;
	for(i=0;;i++)
	{
		scanf("%d%c",&a[i],&c);
		if(c!=',') break;
	}
	n=i;
	max=a[0];
	for(i=1;i<=n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	min=-9999;
	for(i=0;i<=n;i++)
	{
		if(a[i]<max&&a[i]>min)
			min=a[i];
	}
	if(min==-9999)
		printf("No");
	else
		printf("%d",min);
	return 0;
}
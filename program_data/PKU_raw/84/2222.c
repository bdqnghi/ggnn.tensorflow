int main()
{
	int i=0;
	int a;
	int b;
	int max=0;
	int smax=0;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&b);
		if(b>max)
		{
			smax=max;
			max=b;
		}
		else if(b>smax)
		{
			smax=b;
		}
		else
		{
			;
		}
	}
	printf("%d\n",max);
	printf("%d",smax);
	return 0;
}

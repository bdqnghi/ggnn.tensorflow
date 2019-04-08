int main()
{
	int n;
	scanf("%d",&n);
	int MAX1,MAX2;
	int a,b;
	scanf("%d",&a);
    scanf("%d",&b);
	MAX1=a;
	MAX2=b;
	int x,y;
	if (b>a)
	{
		x=MAX1;
		y=MAX2;
		MAX1=y;
		MAX2=x;
	}
	int i;
	for(i=2;i<n;i++)
	{
		int j;
		scanf("%d",&j);
		if (j>MAX1)
		{
			MAX2=MAX1;
			MAX1=j;
		}
		else if (j>MAX2)
		{
			MAX2=j;
		}
	}
	printf("%d\n%d",MAX1,MAX2);
	return 0;
}

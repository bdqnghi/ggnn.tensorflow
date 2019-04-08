void main()
{
	int a[10000];
	int n, b, i;
	b = 0;
	scanf("%d",&n);
	for (i=0; n!=0; i++)
	{
		a[i] = n%10;
		n = n / 10;
		b = b + 1;
	}
	for (i = 0; i<b; i++)
	{
		printf("%d",a[i]);
	}
}

del(int a[],int n)
{
	int *p,*q;
	int i =0;
	int b[10000];
	p = a+1;
	q = a;
	printf("%d",a[0]);
	for (;p < a + n;p++)
	{
		for(; q < p;q++)
		{
			if (*q == *p)
			{
				q = a;
				break;
			}
		}
		if (q == p)
		{
			b[i++] = *p;
			printf(",%d",*p);
		}
		q = a;
	}
}
main()
{
	int a[10000] ;
	int n;
	int *p = a;
	scanf("%d",&n);
	for (;p <a+n;p++)
	{
	  scanf("%d",p);
	}
	del(a,n);
}
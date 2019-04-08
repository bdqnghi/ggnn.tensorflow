
void main()
{
	int a[100];
	int *p, n, m;

	p = &a[0];

	scanf("%d %d", &n, &m);

	for( p = &a[0];p <= a + n - 1;p ++)
	{
		scanf("%d", p);
	}

	p = a + n - m;
	while(1)
	{

		printf("%d", *p);
		p ++;
		//printf("[%g]", p);
		if(p != a + n -m) printf(" ");
		if(p > a + n - 1) p -= n;
		if(p == a + n - m) break;
	}
}

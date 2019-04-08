void main()
{
	int x, y, a[10]={0}, b[10]={0}, i, j, t;
	int *px, *py;
	void tree(int x, int *p);

	scanf("%d%d", &x, &y);

	px = a;
	py = b;
	tree(x, px);
	tree(y, py);
	t = 0;
	for(i=0; i<10; i++)
	{
		for(j=0; j<10; j++)
		{
			if(a[i]==b[j])
			{
				printf("%d", a[i]);
				t = 1;
				break;
			}
		}
		if(t == 1)
		     break;
	}

}

void tree(int x, int *p)
{
	int i;
	for(i=0; ; i++, p++)
	{
		*p = x;
		if(x!=1)
		{
			if(x%2 == 1)
				x = (x-1)/2;
			else
				x = x/2;
		}
		else
			break;
	}
}
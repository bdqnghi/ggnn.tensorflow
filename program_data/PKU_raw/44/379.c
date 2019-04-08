int reverse(int num)
{
	int r=0, m, n=1, s=1, i=0, j=1;
	int a, C=1;
	if(num < 0)
	{
		num = -num;
		C = 0;
	}
	while(s!=0)
	{
		j = j * 10;
		s = num / j;
		i++;           //i?num???
	}
	for(m = i; m > 0; m--)
	{
		j = j/10;
		r = r + (num/j) * n;
		n = n * 10;
		a = num/j;
		num = num - a * j;

	}
	if(C == 0)
		r = -r;
	return r;
}
int main()
{
	int i=0;
	int a[6];

	for(i = 0; i < 6; i++)
	{
		scanf("%d", &a[i]);
	}

	for(i = 0; i < 6; i++)
	{
		printf("%d\n", reverse(a[i]));
	}
	return 0;
}
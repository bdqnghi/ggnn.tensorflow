int num(int n, int *p)
{
	int i=1, max=0;
	int *q=p+1;
	if(n==2)
	{
		if(*p>=*q)
			return 2;
		else
			return 1;
	}
	else
	{
		while(i<=n)
		{
			for(; *p<*q && i<=n; i++, q++);
			i++;
			if(num(n-i+1, q)+1>max)
				max=num(n-i+1, q)+1;
			q++;
		}
	}
	return max;
}
int main()
{
	int k, i, a[25], max=0;
	scanf("%d", &k);
	for(i=0; i<k; i++)
		scanf("%d", &a[i]);
	for(i=k; i>=2; i--)
	{
		if(num(i, a+k-i)>max)
			max=num(i, a+k-i);
	}
	printf("%d\n", max);
	return 0;
}
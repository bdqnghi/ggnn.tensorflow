int zhi(int i);
int hw(int i);
void main(void)
{
	int m, n, a[100];
	scanf("%d%d",&m, &n );
	int i, j = 0;
	for(i = m;i <= n;i ++)
	{	
		if(zhi(i) == 1 && hw(i) == i)
		{	a[j] = i;
			j ++;
		}
	}
	if(j == 0)
		printf("no");
	else
	{	for(i = 0;i < j - 1;i ++)
			printf("%d,",a[i]);
		printf("%d",a[j - 1]);
	}
}

int zhi(int i)
{
	int k;
	if(i == 1)
		return 0;
	if(i == 2)
		return 1;
	for(k = 2;k < i;k ++)
	{
		if(i % k == 0)
			return 0;
	}
	return 1;
}

int hw(int i)
{
	int k = 0;
	while(i > 0)
	{
		k = k * 10 + i % 10;
		i = i / 10;
	}
	return k;
}
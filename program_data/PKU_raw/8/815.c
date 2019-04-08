int m, n, i, j, temp;
int a[100] = {0}, b[100] = {0}, c[200] = {0};
void Read(void);
void Order(void);
void Combine(void);
void Write(void);
int main()
{
	Read();
	Order();
	Combine();
	Write();
	return 0;
}
void Read(void)
{
	scanf("%d%d",&m,&n);
	
	for (i = 1;i <= m;i++)
		scanf("%d",&a[i]);
	for (i = 1;i <= n;i++)
		scanf("%d",&b[i]);
}
void Order(void)
{
	for (i = 1;i <= m;i++)
		for (j = i + 1;j <= m;j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	for (i = 1;i <= n;i++)
		for (j = i + 1;j <= n;j++)
		{
			if (b[i] > b[j])
			{
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
}
void Combine(void)
{
	for (i = 1;i <= m;i++)
		c[i] = a[i];
	for (i = 1;i <= n;i++)
		c[i + m] = b[i];
}
void Write(void)
{
	printf("%d",c[1]);
	for (i = 2;i <= m + n;i++)
	printf(" %d",c[i]);
}
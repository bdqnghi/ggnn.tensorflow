int put(int, int);
int main()
{
	int nLoop;
	int m,n;
	scanf("%d", &nLoop);
	while(nLoop--)
	{
		scanf("%d %d", &m, &n);
		printf("%d\n",put(m,n));
	}
	return 0;
}
int put(int m, int n)
{
	if(m==0 || m==1 || n==1) return 1;
	int sum = 1, i;
	for(i=2;i<=n&&i<=m;i++)
		sum += put(m-i,i);
	return sum;
}
int hw(int m)
{
	int s = 0;
	int t = m;
	for (; m!=0;m=m/10)
	{
		s =10*s +m%10;

	}
	if (s==t)return 1;
	else return 0;
}
int zx(int m)
{
	int i;
	if (m%2==0) return 0;
	for (i=3; i<m/2; i+=2)
		if (m%i==0) return 0;
		return 1;
}
int main()
{
	int i;
	int m;
	int n;
	int k=0;
	scanf("%d%d", &m, &n);
	for (i=m; i<n+1; i++)
		if ( hw(i)==1&&zx(i)==1)
		{
			if (k==0) k = 1;
			else printf(",");
			printf("%d", i);
		};
if (k==0) printf("no");
		return 0;
}
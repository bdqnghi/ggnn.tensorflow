int main(int argc, char* argv[])
{
	int n, i, j, m, b, p, q;
	scanf("%d", &n);
	int a[1000][1000], s;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i=0;i<(n/2);i++)
	{
		for (j=0;j<(n/2);j++)
		{
			if (a[i][j]==0)
			{
				m=i;
				b=j;
			break;
			}
		}
		if (a[i][j]==0)
		{break;}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (a[i][j]==0 && i>m&& j>b)
			{
				p=i;
				q=j;
			}
		}
	}
	s=(p-m+1)*(q-b+1)-(2*(p+q-m-b));
	printf("%d\n", s);
	return 0;
}
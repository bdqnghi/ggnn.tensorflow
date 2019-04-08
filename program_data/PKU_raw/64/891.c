
double juli(int i1, int i2, int i3, int i4, int i5, int i6);
int main()
{
	int n, i, j, k, q = 0, m;
	double temp;
	int a[100], b[100], c[100], f[100], g[100];
	double e[100];
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d%d%d", &a[i], &b[i], &c[i]);
	}
	for(i = 0; i < n; i++)
	{
		for(j = i+1; j < n; j++)
		{
			 e[q] = juli(a[i], b[i], c[i], a[j], b[j], c[j]);
			 f[q] = i;
			 g[q] = j;
			 q++;
		}
	}
	m = n*(n-1)/2;

	for(k = 1; k <= m; k++)
	{
		for(i = 0; i < m-k; i++)
		{
			if(e[i] < e[i+1])
			{
				temp = e[i+1];
				e[i+1] = e[i];
				e[i] = temp;			
			
				temp = f[i+1];
				f[i+1] = f[i];
				f[i] = temp;			
				
				temp = g[i+1];
				g[i+1] = g[i];
				g[i] = temp;
			}
		}
	}

	for(i = 0; i < m; i++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[f[i]], b[f[i]], c[f[i]], a[g[i]], b[g[i]], c[g[i]], e[i]);



	return 0;
}
double juli(int i1, int i2, int i3, int i4, int i5, int i6)
{
	double s;
	s = sqrt((i4-i1)*(i4-i1) + (i5-i2)*(i5-i2) + (i6-i3)*(i6-i3));
	return s;
}

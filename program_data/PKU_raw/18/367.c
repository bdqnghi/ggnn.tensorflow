//?? - ?????????   
int a[100][100];

void gl(int m)
{
	int i,j;
	for (i=0; i<m; i++)
	{
		int min=a[i][0];
		for (j=1; j<m; j++) if (a[i][j]<min) min=a[i][j];
		for (j=0; j<m; j++) a[i][j]-=min;
	}
	for (i=0; i<m; i++)
	{
		int min=a[0][i];
		for (j=1; j<m; j++) if (a[j][i]<min) min=a[j][i];
		for (j=0; j<m; j++) a[j][i]-=min;
	}
}

void xj(int m)
{
	int i,j;
	for (i=2; i<m; i++) a[0][i-1]=a[0][i];
	for (i=2; i<m; i++) a[i-1][0]=a[i][0];
	for (i=2; i<m; i++)
		for (j=2; j<m; j++)
			a[i-1][j-1]=a[i][j];
}

int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;

	for (k=1; k<=n; k++)
	{
		for (i=0; i<n; i++)
			for (j=0; j<n; j++)
				scanf("%d",&a[i][j]);

		int sum=0;
		for (i=n; i>1; i--)
		{
			gl(i);
			sum+=a[1][1];
			xj(i);
		}
		printf("%d\n",sum);
	}

	return 0;
}




int ch(int a[5][5], int n, int m)
{
	if (n>=0 && n<=4 && m>=0 && m<=4)
	{
		int b[5];
		for (int k=0; k<5; k++)
		{
			b[k]=a[m][k];
			a[m][k]=a[n][k];
			a[n][k]=b[k];
		}
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
int x[5][5];
for (int i=0; i<5; i++)
{
	for (int j=0; j<5; j++)
	{
		scanf("%d", &x[i][j]);
	}
}
int m, n;
scanf("%d%d", &n, &m);
int r=ch(x, n, m);
if (r==0)
{
	printf("error");
}
else if (r==1)
{
	for (int w=0; w<5; w++)
	{
		int z=0;
		for (z=0; z<4; z++)
		{
			printf("%d ", x[w][z]);
		}
		printf("%d\n", x[w][z]);
	}
}
return 0;
}
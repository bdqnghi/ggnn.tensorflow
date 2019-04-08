int f[30][30];
int K(int m, int n)
{
	if(f[m][n])
	{
		return f[m][n];
	}
	else if (m==1||n==1)
	{
		f[m][n]=1;
		return f[m][n];
	}
	else if(m<n)
	{
		f[m][n]=K(m,m);
		return f[m][n];
	}
	else if (m==n)
	{
		f[m][n]=K(m,m-1)+1;
		return f[m][n];
	}
	else
	{
		f[m][n]=K(m-n,n)+K(m,n-1);
		return f[m][n];
	}
}

int main(){
int t;
scanf("%d", &t);
int M, N, k;
for (int i=0; i<t; i++)
	{
		scanf("%d%d", &M, &N);
		k=K(M,N);
		printf("%d\n", k);
	}
return 0;
}
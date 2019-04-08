int f(int m,int n);
int main()
{
	int M[40],N[40],k,i,z[40];
	scanf("%d",&k);
	for (i=1;i<=k;i++)
	{
		scanf("%d%d",&M[i],&N[i]);
        z[i]=f(M[i],N[i]);
	    printf("%d\n",z[i]);
	}
	return 0;
}
int f(int m, int n)
{
    if (m < 0) return 0;
    if (m == 0) return 1;
    if (n == 1) return 1;
    return f(m - n, n) + f(m, n - 1);   
}
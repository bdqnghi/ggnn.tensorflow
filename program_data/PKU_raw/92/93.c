const int maxn=1010,minl=-999999999;
inline int Max(int a,int b){return a>b?a:b;}
int f[maxn][maxn];
int a[maxn],b[maxn];
int n;
int cmp(const void *a,const void *b)
{
	return *((int*)b)-*((int*)a);
}
void dp()
{
	int i,j,k;
	for (i=0;i<=n;i++) for (j=0;j<=n;j++) f[i][j]=minl;
	f[0][0]=0;
	for (i=0;i<n;i++)
		for (j=0;j<=i;j++) if (f[i][j]>=-n)
		{
			if (b[i+1]<a[j+1]) f[i+1][j+1]=Max(f[i+1][j+1],f[i][j]+1);
			if (b[i+1]>a[j+1]) f[i+1][j]=Max(f[i+1][j],f[i][j]-1);
			if (b[i+1]==a[j+1])
			{
				f[i+1][j+1]=Max(f[i+1][j+1],f[i][j]);
				if (b[i+1]>a[n-(i-j)]) f[i+1][j]=Max(f[i+1][j],f[i][j]-1);
				else if (b[i+1]==a[n-(i-j)]) f[i+1][j]=Max(f[i+1][j],f[i][j]);
			}
		}
	k=-n;
	for (i=0;i<=n;i++) k=Max(k,f[n][i]);
	printf("%d\n",k*200);
}
int main()
{
	//freopen("in.in","r",stdin);
	while (scanf("%d",&n),n)
	{
		int i;
		for (i=1;i<=n;i++) scanf("%d",a+i);
		for (i=1;i<=n;i++) scanf("%d",b+i);
		qsort(a+1,n,sizeof(int),cmp);
		qsort(b+1,n,sizeof(int),cmp);
		dp();
	}
	return 0;
}
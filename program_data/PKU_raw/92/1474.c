

const int MAXN = 1010;

int n, a[MAXN], b[MAXN], f[MAXN][MAXN];

void init()
{
	int i;
	
	for (i=1; i<=n; i++)
		scanf("%d", &a[i]);
	for (i=1; i<=n; i++)
		scanf("%d", &b[i]);
	sort(a+1, a+n+1);
	sort(b+1, b+n+1);	
}

int game(int x, int y)
{
	if (x>y) return 200; else
	if (x<y) return -200; else return 0;	
}

void work()
{
	int i, j, k;
	
	for (i=1; i<=n; i++)
		f[i][i]=game(a[i], b[1]);
	for (k=1; k<n; k++)
		for (i=1; i<=n-k; i++){
			j=i+k;
			f[i][j]=max(f[i][j-1]+game(a[j], b[j-i+1]), f[i+1][j]+game(a[i], b[j-i+1]));	
		}
	printf("%d\n", f[1][n]);
}

int main()
{
	while (scanf("%d", &n), n!=0){
		init();
		work();
	}
	
	return 0;
}

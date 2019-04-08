


int a[1005], b[1005], w[1005][1005];

int main()
{
	int i, j, n;
	//freopen("input.txt", "r", stdin);
	while(scanf("%d", &n)==1)
	{ 
		if(n<=0)
			return 0;
		for( i=1 ; i<=n ; i++ )
			scanf("%d", &b[i]);
		for( i=1 ; i<=n ; i++ )
			scanf("%d", &a[i]);
		sort(a+1, a+n+1);
		sort(b+1, b+n+1);
		memset(w, -100, sizeof(w));
		for( i=0 ; i<=n+1 ; i++ )
			w[n+1][i]=0;
		for( i=n; i>=1 ; i-- )
		{
			w[i][n+1]=w[i+1][n+1]-1;
			for( j=n ; j>=i ; j-- )
			{
				if(a[i]<b[j])
				{
					w[i][j]=w[i+1][j+1]+1;
				}
				else if(a[i]==b[j])
					w[i][j]=max(w[i+1][j+1], w[i+1][j]-1);
				else
					w[i][j]=w[i+1][j]-1;
				w[i][j]=max(w[i][j], w[i][j+1]);
			}
		}

		//for( i=1 ; i<=n+1 ; i++ )
		//{
		//	for( j=1 ; j<=n+1 ;j ++ )
		//		printf("%3d ", w[i][j]);
		//	puts("");
		//}
	/*	for( i=0, result=-20060311 ; i<=n ; i++ )
			result=max(result, w[1][i]);*/
		printf("%d\n", w[1][1]*200);
	}
}
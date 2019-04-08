
int vs[MaxN][MaxN];
int f[MaxN][MaxN];
int qiwang[MaxN] , tianji[MaxN];

int max(int x, int y)
{
	if (x > y) return x;
	else return y;
}

int vs1(int x, int y)
{

    if (tianji[x] > qiwang[y]) return 200;
    else if (tianji[x] < qiwang[y]) return -200;
        else return 0;
}

int sort(int a[MaxN],int l, int r)
{

    int i = l, j = r, k = a[(i+j)/2];

    while (i <= j)
    {
        while (a[i] > k) ++i;
        while (k > a[j]) --j;
        if (i <= j)
        {

            int x = a[i];
            a[i] = a[j];
            a[j] = x;
            ++i;
            --j;
        }
    }
    if (l < j) sort(a,l,j);
    if (i < r) sort(a,i,r);
}
int main()
{
  //  freopen("1.in","r",stdin);
   // printf("2\n");


    int k, L, n , i , j , a ;
	scanf("%d" , &n );
	while (n)
	{



		//qiwang = (int*)malloc(n*sizeof(int));
	//	tianji = (int*)malloc(n*sizeof(int));
		for ( i = 0 ; i < n ; i ++ )  scanf("%d" , &tianji[i] );
		for ( i = 0 ; i < n ; i ++ ) { scanf("%d" , &qiwang[i] );}//printf(" %d ",i);}

        sort(tianji,0,n-1);
        sort(qiwang,0,n-1);

    for (i = 0; i < n; ++i) f[i][i] = vs1(i,n-1);
       for (L = 1; L < n; ++L)
            for (i = 0; i < n-L; ++i)
            {
                j = i + L;
                f[i][j] = max ( f[i+1][j] + vs1(i,n-1-L) , f[i][j-1] + vs1(j,n-1-L) );
            }
		printf("%d\n",f[0][n-1]);
	scanf("%d" , &n );
	}
	return 0;
}

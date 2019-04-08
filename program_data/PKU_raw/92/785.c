
int comp( const void *a, const void *b )
{
    return *(const int *)a - *(const int *)b;
}

int main()
{
    int w[1500], t[1500];
    int wsymb[1500], tsymb[1500];
    int n, i, j, tot;

    while( scanf("%d",&n), n )
    {
        for( i = 0; i < n; i++ )
            scanf( "%d", &t[i] );
        for( i = 0; i < n; i++ )
            scanf( "%d", &w[i] );

        qsort( w, n, sizeof(int), comp );
        qsort( t, n, sizeof(int), comp );

        memset( wsymb, 0, n * sizeof(int) );
        memset( tsymb, 0, n * sizeof(int) );
        tot = 0;

        for( i = 0; i < n; i++ )
        {
            for( j = n - 1; j >= 0 && (wsymb[j] || w[j] >= t[i]); j-- );
            if( j < 0 ) continue;
            wsymb[j] = tsymb[i] = 1;
            tot++;
        }

        for( i = j = 0; i < n; i++ )
        {
            if( wsymb[i] ) continue;
            while( j < n && (tsymb[j] || w[i] > t[j]) ) j++;
            if( j == n ) break;
            if( w[i] == t[j] )
                wsymb[i] = tsymb[j++] = 1;
        }
        for( i = 0; i < n; i++ )
            if( !wsymb[i] ) tot--;

        printf( "%d\n", tot * 200 );
    }

    return 0;
}

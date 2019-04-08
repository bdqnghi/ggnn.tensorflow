
int main()
{
    int meet[100000];
    int i, j, n, a, b;

    scanf( "%d", &n );
    memset( meet, 0, n * sizeof(int) );
    for( scanf("%d%d",&a,&b); a + b; scanf("%d%d",&a,&b) )
        meet[b]++;

    for( i = 0; i < n; i++ )
        if( meet[i] == n -1 )
            break;

    if( i == n )
        printf( "NOT FOUND" );
    else printf( "%d\n", i );

    return 0;
}


int input( int *s, int n )
{
    int i = 0;
    for ( i = 0; i < n; i++ )
        scanf("%d", &s[i]);
    return 0;
}

int sort( int *s, int n )
{
    int i = 0, j = 0;
    for ( i = 0; i < n; i++ )
    {
        for ( j = 1; j < n; j++ )
        {
            if ( s[j-1] > s[j] )
            {
                int temp = s[j-1];
                s[j-1] = s[j];
                s[j] = temp;
            }
        }
    }
    return 0;
}

int combine( int *s1, int *s2, int n1, int n2, int *s )
{
    int i = 0;
    for ( i = 0; i < n1; i++ )
        s[i] = s1[i];
    for ( i = 0; i < n2; i++ )
        s[i+n1] = s2[i];
    return 0;
}

int output( int *s, int n )
{
    int i = 0;
    if ( n <= 0 )
        return 0;
    printf("%d", s[0]);
    for ( i = 1; i < n; i++ )
        printf(" %d", s[i]);
}

int main()
{
    int n1 = 0, n2 = 0;
    scanf("%d %d", &n1, &n2);
    int s1[1000]= {0};
    int s2[1000]= {0};
    input(s1,n1);input(s2,n2);
    sort(s1,n1);sort(s2,n2);
    int s[2000]={0};
    combine(s1,s2,n1,n2,s);
    output(s,n1+n2);
    return 0;
}

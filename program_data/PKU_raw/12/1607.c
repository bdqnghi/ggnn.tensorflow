
void swap( int* a,int *b )
{
    int temp = *a;*a = *b; *b = temp;
}

int find( int* s, int x, int l, int r )
{
    if ( l > r ) return 0;
    int mid = (l+r)/2;
    if ( s[mid] == x ) return 1;
    else
    {
        if ( s[mid] > x ) return find(s,x,l,mid-1);
        else return find(s,x,mid+1,r);
    }
}

int main()
{
    int n = 0, i = 0, j = 0;
    int x = 0;
    int s[1000] = {0};
    while ( (scanf("%d", &x), x) != -1 )
    {
        if ( x != 0 )
        {
            s[n++] = x;
            for ( i = n-1; (i>0) && (s[i] < s[i-1]); i-- )
                swap(&s[i],&s[i-1]);
        }
        else
        {
            int count = 0;
            for ( i = 0; i < n; i++ )
            {
                if ( find(s,2*s[i], i+1, n) )
                    count++;
            }
            printf("%d\n",count);
            for ( i = 0; i < n; i++ )
                s[i] = 0;
            n = 0;
        }
    }
    return 0;
}

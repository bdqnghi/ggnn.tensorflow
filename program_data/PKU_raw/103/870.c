int main()
{
    char a[1001];
    int l,i,sum=1;
    gets(a);
    l = strlen(a);
    for ( i = 0 ; i < l ; i ++ )
    {
        if ( a[i] >= 'a' && a[i] <= 'z' )
        a[i] -= 32;
    }
    for ( i = 0 ; i < l ; i ++ )
    {
        if ( a[i] == a[i+1] )
        {
             sum++;
             }
        else
        {
            cout<<"("<<a[i]<<","<<sum<<")";
            sum=1;
        }
        }
}
        

int main()
{
    char c[50];
    char *p = NULL; 
    cin.getline(c,50);
    for ( p = c; p < c + strlen(c); p++ )
    {
        if ( *p >= '0' && *p <= '9' )
        {
            cout << *p; 
            if ( p < c+strlen(c)-1 && *(p+1) >= '0' && *(p+1) <= '9' ) continue;
            cout << endl;
        }
    }
    
    return 0;
}
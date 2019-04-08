int main()
{
    char c[100];
    cin.getline(c,100);
    int n = strlen(c);
    int i = 0;
    do
    {
        if ( c[i] != ' ' )
        {
                cout << c[i] ;
                //cout << i << endl ;
                i++ ;
        }
        else
        {
            cout << c[i] ;
            do 
            {
                 i = i + 1 ;
            }while ( c[i] == ' ') ;
        }
    }while ( i <= n - 1) ;
    cout << endl ;
    return 0 ;
} 
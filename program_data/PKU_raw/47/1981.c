int main ()
{
    int n ;
    cin >> n ;
    int yeah[100] = {0} ;              //?????? 
    for ( int i = 1 ; i <= n ; i++ )
        cin >> yeah[i-1] ;             //??????
    for ( int i = n ; i >= 2 ; i-- )
        cout << yeah[i-1] << " " ;     //??????
    cout << yeah[0] ;                  //???????????
    return 0 ; 
}
// ( > w < ) finished~

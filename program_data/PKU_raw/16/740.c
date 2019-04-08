
int main()
{
    int n, num[10000];
    int i = 0, t = 0;
    cin >> n;
    num[0] = n % 10 ;
    
    while(n / 10 != 0)
    {       t = t + 1;
            num[t] =( n / 10 ) % 10 ;
            n = n / 10;   
    }
    
    for (i;i <= t; i++)
    {
        cout << num[i];
    
    }
    
    return 0 ;

}
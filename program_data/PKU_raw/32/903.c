/**
 * @file ?????
 * @author ???
 * @date 11-17
 * @description ?????
 */
int main()
{
    int n, i, j, s[101], sa[101], sb[101], la, lb;
    char a[101], b[101] ;
    cin >> n;
    for (j = 1; j <= n; j ++)
    {
        for (i = 0; i <= 100 ; i ++)
        {
            sa[i] = 0; sb[i] = 0 ; s[i] = 0; 
        }
        cin.get();  
        cin.getline(a,101);
        cin.getline(b,101);
        la = strlen(a);
        lb = strlen(b);
        for (i = la-1; i >= 0 ; i --) sa[la-1-i] = a[i] - '0' ;
        for (i = lb-1; i >= 0 ; i --) sb[lb-1-i] = b[i] - '0' ;
        for (i = 0 ; i <= la-1 ; i ++)
        {
            s[i] = s[i] + sa[i] - sb[i] ;
            if (s[i] < 0) { s[i] = s[i] + 10; s[i+1] -- ;}
        }
        for (i = la-1; i >= 0 ; i -- )
        if (s[i] != 0) break;
        while (i >= 0)
        {
             cout << s[i] ;
             i --;
        }
        cout << endl;
    }
    return 0;
}

    

    

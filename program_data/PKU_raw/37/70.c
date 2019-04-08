/**
 * @file ?????????????
 * @author ???
 * @date 11-17
 * @description ????????‘??’
 */
int main()
{
    int n, a[27] = {0},b[27] = {0}, i, j, k , len, flag, m ;
    char ch[100001],c;
    cin >> n;
    cin.get();
    for (i = 1; i <= n; i ++)
    {
        cin.getline(ch,100001);
        len = strlen(ch) ;
        k = 0;
        flag = 1;
        for (j= 0; j <= 26; j ++) {a[j] = 0; b[j] = 0;}
        for (j = 0; j < len; j ++)
        {
            m = ch[j] - 96 ;
            a[m] ++;
            if (a[m] == 1) { k ++;b[k] = m;}
        }
        for (j = 1; j <= k; j ++)
        {
            if (a[b[j]] == 1) 
            {
                c = 'a' +b[j] -1;
                cout << c << endl;
                flag = 0;
                break;
            }
        }
        if (flag == 1) cout << "no" << endl ; 
    }
    return 0;
} 
         
        

     
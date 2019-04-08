//**************************** 
//*?????13              *
//*????? 1200012708     *
//*???2012?11?10?      *
//**************************** 

int main()
{
    char a; // ???? 
    int c[200], ans[200]; // c?????ans?? 
    int l = 0, s, m; // l???????m?? 
    
    while (scanf("%c", &a) && a != '\n') // ?????????????? 
    {
        c[l++] = a - '0';
    }
    m = 0;
    for (int i = 0; i < l; i++) // ?????? 
    {
        c[i] += m * 10;
        m = c[i] % 13;
        ans[i] = c[i] / 13;
    }
    for (s = 0; s < l; s++) // ????0????? 
    {
        if (ans[s] != 0) break;
    } 
    if (s == l) cout << 0 << endl; // ????0???0 
    else // ?????????? 
    {
        for (int i = s; i < l; i++)
            cout << ans[i];
        cout << endl;
    }
    cout << m << endl;
    
    return 0;
}

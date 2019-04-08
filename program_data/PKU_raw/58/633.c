int main()
{
    int n, flag, i,j,m=0;
    char c[81];
    cin >> n;
    cin.get();
    for (i = 1; i <= n ; i ++)
    {
        cin.getline(c,81);
        flag = 1;
        if ((c[0] == '_') || (c[0] >= 'a' && c[0] <= 'z') || (c[0] >= 'A' && c[0] <= 'Z'))
        flag = 1;
        else flag = 0;
        j = 1;
        while(c[j] != '\0')
        {
             if ((c[j] >= 'a' && c[j] <= 'z')||(c[j] >= 'A' && c[j] <= 'Z')||(c[j] >= '0' && c[j] <= '9') || c[j] == '_')
              m ++;  /* ??????????,???????IF????*/
             else flag = 0;
             j ++;
         }
         cout << flag << endl;
    }
    return 0;
}



      
        
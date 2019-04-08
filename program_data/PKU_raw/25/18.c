// ?????? ???1000010500 
// ??2?N?? 
// 2010-12-15


int main()
{
    int a[32],i,j,N;
    cin >> N;                   // N?? 
    memset(a,0,sizeof(a));      // ??? 
    if (N == 1)                 // 1??????2 
       cout << "2" << endl;
    else if (N == 0)
         cout << "1" << endl; 
    else
    {
        a[0] = 2;
        for (i = 1;i < N;i++)
        {
            for (j = 0;j < 32;j++)    // ????2 
                a[j] *= 2;
            for (j = 0;j < 32;j++)
            if (a[j] > 9)             // ?? 
            {
                     a[j] -= 10;
                     a[j + 1] ++;
            }
        }
        for (i = 31;i >= 0;i--)       // ?????0??? 
            if (a[i] != 0)
               break;
        for (i = i;i >= 0;i--)
            cout << a[i];
        cout << endl;
    }
    return 0;
}
    
     

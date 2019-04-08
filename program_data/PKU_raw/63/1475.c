//********************************
//*???????   **
//*?????? 1200012827 **
//*???2012.11.6  **
//********************************
int main()
{
    int m,n;
    cin >> m >> n;
    int number1[m][n];
    int i,j;
    for (i=0;i<=m-1;i++)                      //??m?n?????????
    {
        for (j=0;j<=n-1;j++)
        {
            int a;
            cin >> a;
            number1[i][j]=a;
        }
    }
    int p,q;
    cin >> p >> q;
    int number2[p][q];

    for (i=0;i<=p-1;i++)                    
    {
        for (j=0;j<=q-1;j++)                //??p?q?????????
        {
            int a;
            cin >> a;
            number2[i][j]=a;
        }
    }
    int c[m][q],k;
    for (i=0;i<=m-1;i++)
    {
        for (j=0;j<=q-1;j++)
        {
            c[i][j]=0;
            for (k=0;k<=n-1;k++)
            {
                c[i][j]+=number1[i][k]*number2[k][j];         //??????????
            }
        }
    }
    
    for (i=0;i<=m-1;i++)
    {
        for (j=0;j<=q-2;j++)
        {
            cout << c[i][j] <<" ";                            //????????
        }
        if (j==q-1)
        {
                   cout << c[i][j] << '\n';
        }
    }
  
    return 0;
}

//****************************************
//*????????                      **
//*??? 1100012927              **
//*2011.11.29                     **
//****************************************
int num[9][9];
void f(int, int, int, int);
int main()
{
    int m, n, i, j;
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            num[i][j] = 0;
    cin >> m >> n;
    f(4, 4, m, n);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (j < 8)
                cout << num[i][j]<<" ";
            else
                cout << num[i][j];
        }
        cout << endl;
    }
            return 0;
}
void f(int i, int j, int m, int n)
{
    int h, k;
    if (n == 0)      
        num[i][j] += m;
    else
        for (h = i - 1; h <= i + 1; h++)
            for (k = j - 1; k <= j + 1; k++)
            {
                if (k >= 0 && k < 10 && h >= 0 && h < 10)
                {
                    if (h == i && k == j )       //??????????????
                    {
                        f(h, k, 2 * m, n - 1);
                    }
                    else    //???????????
                    {
                        f(h, k, m, n - 1);
                    }
                }
            }
}

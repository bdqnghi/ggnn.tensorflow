//********************************
//*????????????   **
//*?????? 1200012988 **
//*???2012.11.19  **
//********************************


int a[100][100];                       //??a?????

int smaller(int a, int b)
{
    if(a >= b)
        return b;
    else
        return a;
}

int Sum(int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = a[i][0];
        for (int j = 1; j < n; j++)
            min = smaller(min, a[i][j]); //????????
        for (int j = 0; j < n; j++)
            a[i][j] -= min;              //?????????????
    }
    for(int j = 0; j < n; j++)
    {
        int min = a[0][j];
        for(int i = 0; i < n; i++)
            min = smaller(min, a[i][j]); //????????
        for(int i = 0; i < n; i++)
            a[i][j] -= min;              //?????????????
            }
    if (n == 2)                          //n?2??????????????????a[1][1]
        return a[1][1];
    int k = a[1][1];
    for (int i = 1; i < n - 1; i++)      //?n??????n-1???
    {
        a[0][i] = a[0][i + 1];
        a[i][0] = a[i + 1][0];
        for (int j = 1; j < n - 1; j++)
            a[i][j] = a[i + 1][j + 1];
    }
    return k + Sum(n - 1);               //?????
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
                cin >> a[j][k];
        }
        cout << Sum(n) << endl;
    }

    return 0;
}

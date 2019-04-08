//********************************
//*???5.cpp   **
//*?????2?N??    **
//*?????? 1300012838 **
//*???2013.11.18  **
//********************************

int main()
{
    int a[10000], n, len = 1, up;
    cin >> n;
    a[1] = 1;
    for (int i = 1; i <= n; i++)
    {
        up = 0;
        for (int j = 1; j <= len; j++)
        {
            a[j] *= 2;
            a[j] += up;
            if (a[j] >= 10)
            {
                a[j] = a[j] - 10;
                up = 1;
            }
            else
                up = 0;
        }
        if (up == 1)
        {
            a[len + 1] = 1;
            len++;
        }
    }
    for (int i = len; i >= 1; i--)
        cout << a[i];
    cout << endl;

    return 0;
}
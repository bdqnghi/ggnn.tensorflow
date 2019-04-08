//********************************
//*???1.cpp   **
//*???????    **
//*?????? 1300012838 **
//*???2013.12.11  **
//********************************

int num[110];

void movenum(int n)
{
    int *p = num + n;
    while (p > num)
    {
        *p = *(p-1);
        p--;
    }
    num[0] = *(p+n);
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    for (int i = 1; i <= m; i++)
        movenum(n);
    cout << num[0];
    for (int i = 1; i < n; i++)
        cout << " " << num[i];
    cout << endl;

    return 0;
}
    
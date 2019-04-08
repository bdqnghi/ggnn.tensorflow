int main()
{
    int a[100010], n, k, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    num = n;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            for (int j = i; j < num - 1; j++)
            {
                a[j] = a[j + 1];
            }
            a[num - 1] = k + 1;  //????k,???????,???.
            i--;
            num--;
        }
    }
    for (int i = 0; i < num - 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << a [num - 1] << endl;

    return 0;
}

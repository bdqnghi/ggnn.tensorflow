int main()
{
    int  n, i, j, a[100000], k;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    for (i = 0; i < n; )
    {
        if (a[i] == k)
        {     
            for (j = i + 1; j < n ; j++)
                a[j - 1] = a[j];
			n--;
        }
        else
			i++;
    }
    for (int m = 0; m < n - 1; m++)
        cout << a[m] << " ";
	cout << a[n - 1];
    return 0;
}

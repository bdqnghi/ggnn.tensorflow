//********************************
//*???????????   **
//*?????? 1200012988 **
//*???2012.10.30  **
//********************************


int main()
{
    int n, k, j = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    while(j < n)
    {
        if(a[j] == k)
        {

            for(int m = j; m < n; m++)
                a[m] = a[m + 1];
            n--;
        }
        if(a[j] == k)
            j--;
        j++;
    }
    for(int l = 0; l < n; l++)
    {
        if(l < n - 1)
            cout << a[l] << " ";
        else
            cout << a[l];
    }

    return 0;
}

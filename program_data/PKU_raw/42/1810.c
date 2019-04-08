//********************************
//*???2.cpp   **
//*???????????   **
//*?????? 1300012838 **
//*???2013.10.30  **
//********************************

int main()
{ 
    int num[100000], n, k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    cin >> k;
    for (int j = 0; j < n; j++)
    {
        if (num[j] == k)
        {
            for (int l = j+1; l < n; l++)
            {
                num[l-1] = num[l];
            }
            n--;
            j--;
        }
    }
    cout << num[0];
    for (int p = 1; p < n; p++)
        cout << " " << num[p];
    cout << endl;

    return 0;                    
}  
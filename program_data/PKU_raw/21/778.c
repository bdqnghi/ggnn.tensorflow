
int main()
{
    void sort(int a[], int n);
    int a[300 + 10] = {0};
    int i;
    double sum = 0, aver;
    int n;

    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    aver = sum / n;
    sort(a, n);
   // for (i = 0; i < n; i++)
   //     cout << a[i] << end l;
    if(fabs(aver - a[0] - a[n - 1] + aver) < 1e-10)
        cout << a[0] << "," << a[n - 1] << endl;
    else if(aver - a[0] > a[n - 1] - aver)
        cout << a[0] << endl;
    else if(aver - a[0] < a[n - 1] - aver)
        cout << a[n - 1] << endl;

    return 0;
}

void sort(int a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

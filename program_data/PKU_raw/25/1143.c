int main()
{
    const int max = 200;
    int result[max+1];
    memset(result, 0, sizeof(result));
    int n, i, j;
    cin >> n;
    int size=1;
    result[0]= 1;
    int c = 0;
    for (i=0;i<n;i++)
    {
        for (j=0;j < size;j++)
        {
             result[j] = result[j] * 2 + c ;//?????????????? 
             if (result[j] >= 10)
             {
                 result[j] -= 10;
                 c = 1;
                 if (j == size-1)
                 {
                     size++;
                 }
             }
             else
             {
                 c=0;
             }
        }
    }  
    i=max;
    while (result[i] == 0)
    {
          i--;
    }
    for (;i>=0;i--)
    {
        cout << result[i] ;
    }
    cout << endl;
    return 0;
}      
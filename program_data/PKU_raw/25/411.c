char result[30] = {0};
void mul();
int main()
{
    int n;
    result[0] = '1';
    cin >> n;
    int i;
    if(n == 0)   cout << result << endl;
    else
    {
        for(i = 1; i <= n; i++)
            mul();
        for(i = strlen(result) - 1; i >= 0; i--)
            cout << result[i] ;
    }
    return 0;
}
void mul()
{
    int k;
    int div = 0;
    k = strlen(result);
    for(int i = 0; i < k; i++)
    {
       int t;
       t = result[i] - '0';
       t = t * 2;
       result[i] = t % 10 + div + '0';
       div =  t / 10;
       if(i == k - 1 && div != 0)
            result[i + 1] = div + '0';
    }   
}


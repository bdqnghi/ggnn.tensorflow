// ?????? ???1000010500
// ?7???????
int main()
{
    int n,i,k,sum = 0;
    cin >> n;
    for (i = 1;i <= n;i ++)
    {
        k = i / 10;                      // k??i????? 
        if (i % 7 == 0 || i % 10 == 7 || k == 7 )
        continue;
        sum = sum + i * i;
    }
    cout << sum;
    return 0;
}
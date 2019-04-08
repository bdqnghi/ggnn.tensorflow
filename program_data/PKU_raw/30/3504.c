

int main()
{
    int n;
    int sum = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if((i % 7)==0)
            continue;
        if((i%10) == 7 || (i - (i % 10)) == 70 || (i - (i % 100) == 700))
            continue;
        sum = sum + i*i;
    }

    cout << sum;
    return 0;
}

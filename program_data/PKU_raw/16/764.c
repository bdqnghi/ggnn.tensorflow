

int main()
{
    int n, i = 10;
    cin >> n;
    if(n < 10)
        cout << n << endl;
    else
        if(n == 10)
        cout << 01 << endl;
        else
           {
                while(n > 0)
             {
                cout << n % i;
                n = n / i;

             }
           }
    return 0;
}

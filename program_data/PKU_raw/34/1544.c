int main ()
{
    int n,a;
    cin >> n;
    while (n!=1)
    {
        if (n%2==0)
        {
            a = n/2;
            cout << n <<"/2="<< a << '\n';
            n = n/2;
        }
        else
        {
            a = n*3+1;
            cout << n <<"*3+1="<< a <<'\n';
            n = n*3+1;
        }
    }
    cout << "End";
    return 0;
}

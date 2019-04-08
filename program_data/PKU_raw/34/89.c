

void Guess(int n)
{
    if (n == 1)
    {
        cout << "End" << endl;
    }
    else if (n % 2 != 0)
    {
        int result = n * 3 + 1;
        cout << n << "*3+1=" << result << endl;
        Guess(result);
    }
    else
    {
        int result = n / 2;
        cout << n << "/2=" << result << endl;
        Guess(result);
    }
}

int main()
{
    int n;
    cin >> n;
    Guess(n);
}

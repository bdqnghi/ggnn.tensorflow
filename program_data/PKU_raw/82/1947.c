

int main()
{
    int n, a, b, t = 0, i = 1, h = 0;
    cin >> n;
    do
    {
        cin >> a >> b;
        if(a >= 90 && a <= 140 && b >= 60 && b <= 90)
            h = max(i - t, h);
        else
            t = i;
        i++;
    }while(i <= n);
    cout << h << endl;
    return 0;
}

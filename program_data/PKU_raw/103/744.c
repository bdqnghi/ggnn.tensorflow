int main()
{
    char a[1000], last;
    memset(a,'%',1000);
    cin >> a;
    int i = 0, count = 1;
    while (a[i] != '%')
    {
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] += 'A' - 'a';
        i++;
    }
    last = a[0];
    i = 1;
    while (a[i] != '%')
    {
        if (a[i] == last)
            count++;
        else
        {
            cout << "(" << last << "," << count << ")";
            last = a[i];
            count = 1;
        }
        i++;
    }
    return 0;
}
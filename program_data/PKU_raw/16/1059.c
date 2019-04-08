int main()
{
    char a[5] = {0};
    int i = 0;
    while ((a[i] = cin.get()) != '\n')
        i++;
        for ( ; i >= 0; i--)
            cout << a[i];
    return 0;
}
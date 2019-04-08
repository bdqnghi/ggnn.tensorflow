char a[101][101];
int main()
{
    int j;
    for (j = 0; cin >> a[j]; ++ j);//??
    for (; j; )//????????
    {
        cout << a[--j];
        if (j)
            cout << " ";
    }
    return 0;
}

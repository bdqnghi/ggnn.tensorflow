int main()
{
    int time, count = 0;
    int a[1001] = {0};
    while (1)
    {
        cin >> time;
        a[time]=a[time] + 1;//???????????????1
        count=count + 1;
        if (cin.get() != ',')
            break;
    }
    int i;
    char c;
    for (i=0; i<count; ++i)
    {
        cin >> time >> c;
        a[time]=a[time] - 1;//???????????????1
    }
    int p= 0, max = 0;
    for (i=0; i<1001; ++i)
    {
        p = p + a[i];
        if (p > max)//???????????????
            max = p;
    }
    cout << count << ' ' << max << endl;
    return 0;
}


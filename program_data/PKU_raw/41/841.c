

int main()
{
    int a, b, c, d, e;
    for (a = 1; a <= 5; a++)
    for (b = 1; b <= 5; b++)
    for (c = 1; c <= 5; c++)
    for (d = 1; d <= 5; d++)
    for (e = 1; e <= 5; e++)
    {
        if (a==b || a==c || a==d || a==e || b==c || b==d || b==e || c==d || c==e || d==e)
            continue;
        if (e==2 || e==3)
            continue;
        int t = 0;
        if (!(a==1 || a==2) && (e==1))
            continue;
        if (!(b==1 || b==2) && (b==2))
            continue;
        if (!(c==1 || c==2) && (a==5))
            continue;
        if (!(d==1 || d==2) && (c!=1))
            continue;
        if (!(e==1 || e==2) && (d==1))
            continue;
            
        if ((a==1 || a==2) && !(e==1))
            continue;
        if ((b==1 || b==2) && !(b==2))
            continue;
        if ((c==1 || c==2) && !(a==5))
            continue;
        if ((d==1 || d==2) && !(c!=1))
            continue;
        if ((e==1 || e==2) && !(d==1))
            continue;
        cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e;
            
    }
    return 0;
}

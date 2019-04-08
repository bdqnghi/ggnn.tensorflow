//??????

int main()
{
    int n, a, b, sureA = 0, sureB = 0;
    cin>>n;
    for(a = 3 ; a <= n/2 ; a += 2)
    {
        b = n - a;
        if(a == 3)
            sureA = 1;
        if(b == 3)
            sureB = 1;
        for(int i1 = 2 ; i1 <= sqrt(a) ; i1++)
        {
            if(a % i1 == 0)
                break;
            if(sqrt(a) - i1 < 1)
                sureA = 1;
        }
        for(int i2 = 2 ; i2 <= sqrt(b) ; i2++)
        {
            if(b % i2 == 0)
                break;
            if(sqrt(b) - i2 < 1)
                sureB = 1;
        }
        if(sureA == 1 && sureB == 1)
            cout<<a<<" "<<b<<endl;
        sureA = 0;
        sureB = 0;
    }

    return 0;
}

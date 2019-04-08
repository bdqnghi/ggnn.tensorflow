int main()
{
    int n;
    cin >> n;
    if (n>=0&&n<=9)
    {
         cout << n << endl;
    }
    else if (n>=10&&n<=99)
    {
         int a,b;
         a=n/10;
         b=n%10;
         cout << b <<a << endl;
    }
    else if (n>=100&&n<=999)
    {
         int a,b,c;
         a=n/100;
         b=(n-100*a)/10;
         c=n-100*a-10*b;
         cout << c <<b <<a <<endl;
    }
    else if (n>=1000&&n<=9999)
    {
         int a,b,c,d;
         a=n/1000;
         b=(n-1000*a)/100;
         c=(n-1000*a-100*b)/10;
         d=n-1000*a-100*b-10*c;
         cout << d << c << b << a<< endl;
    }
    else if (n=10000)
    {
         cout <<"00001"<<endl;
    }
    return 0;
}
             
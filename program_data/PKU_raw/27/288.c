//???
//1100012822
//?????????
//2011?9?15?

int main()
{
    int n;
    double a , b ,c , x1 , x2 , t;
    cin>>n;
    while (n--)
    {
    cin>>a>>b>>c;
    cout<<setprecision(5)<<fixed;
    if (b * b - 4 * a * c >= 0)
        {
            x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
            x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
            if (x1 == x2)
                {
                    cout<<"x1=x2="<<x1<<endl;
                }
            else
                {
                    cout<<"x1="<<x1<<";"<<"x2="<<x2<<endl;
                }
        }
    else
        {
            t = -b/(2 * a);
            if (abs(t)<1e-6) t=abs(t);
            cout<<"x1="<<t<<"+"<<(sqrt(-b * b + 4 * a * c))/(2 * a)<<"i";
            cout<<";";
            cout<<"x2="<<t<<"-"<<(sqrt(-b * b + 4 * a * c))/(2 * a)<<"i"<<endl;
        }
    }
    return 0;
}

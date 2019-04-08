int main ()
{
    int n;
    cin >>n;
    for (int i=1;i<=n;i++)
    {
        double a,b,c,d,e,x,y;
        cin >>a>>b>>c;
        d=b*b-4*a*c;
        e=-b/2/a;
        if (e==-0)
            e=0;
        if (d>0)
        {
            x=e+sqrt(d)/2/a;
            y=e-sqrt(d)/2/a;
            cout <<fixed<<setprecision(5)<<"x1="<<x<<";x2="<<y<<endl;
        }
        if (d==0)
        {
            cout <<fixed<<setprecision(5)<<"x1=x2="<<e<<endl;
        }
        if (d<0)
        {
            x=sqrt(-d)/2/a;
            cout <<fixed<<setprecision(5)<<"x1="<<e<<"+"<<x<<"i;x2="<<e<<"-"<<x<<"i"<<endl;
        }
    }
    return 0;
}

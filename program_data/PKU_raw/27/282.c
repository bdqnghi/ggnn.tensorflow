int main()

{

    int n,i;
    float a,b,c;
    double x1,x2,m;
    cin>>n;
    for(i=1;i<=n;i++)
    {
		cin>>a>>b>>c;
		m=-b/(2*a);
        if(b*b-4*a*c>0)
        {
            x1 = (-b + sqrt(b*b-4*a*c))/(2*a); 
            x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
            cout<<fixed<<setprecision(5)<<"x1="<<x1<<";"<<"x2="<<x2<<endl;
        }
        else if(b*b-4*a*c<0)
        {
            if (m!=0)
			{
				cout<<fixed<<setprecision(5)<<"x1="
                <<-b/(2*a)<<"+"<<sqrt(-b*b+4*a*c)/(2*a)<<"i;";
                cout<<fixed<<setprecision(5)<<"x2="
                <<-b/(2*a)<<"-"<<sqrt(-b*b+4*a*c)/(2*a)<<"i"<<endl;
			}
			else
			{
				cout<<fixed<<setprecision(5)<<"x1="
                <<"0.00000+"<<sqrt(-b*b+4*a*c)/(2*a)<<"i;";
                cout<<fixed<<setprecision(5)<<"x2="
                <<"0.00000-"<<sqrt(-b*b+4*a*c)/(2*a)<<"i"<<endl;
			}
        }
        else 
        {
            x1 = x2 = -b/(2*a); 
            cout<<fixed<<setprecision(5)<<"x1=x2="<<x1<<endl;
        }
	}
    return 0;
}
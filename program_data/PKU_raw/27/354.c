int main()
{
	int n,ni;
	cin>>n;
    for(ni=1;ni<=n;ni=ni+1)
	{
		double a,b,c,x1,x2,t;
		cin>>a>>b>>c;
		t=(-b)/(2*a);
		if(fabs(t) < 1e-9)
         t= 0;
		if (b*b-4*a*c>0)
		{
			cout<<"x1=" ;
            printf("%.5f",(t + sqrt(b*b-4*a*c)/(2*a)));
            cout<<";";
		    cout<<"x2=";
            printf("%.5f",(t - sqrt(b*b-4*a*c)/(2*a)));
            cout<<endl;
        }
		else if (b*b-4*a*c==0)
		{
			cout<<"x1=x2=";
            printf("%.5f", t);
            cout<<endl;
		}
		else
        {   
			cout<<"x1=";
            printf("%.5f", t);
            cout<<"+";
            printf("%.5f",(sqrt(4*a*c-b*b)/(2*a)));
            cout<<"i;";
		    cout<<"x2=";
            printf("%.5f",t);
            cout<<"-";
            printf("%.5f",(sqrt(4*a*c-b*b)/(2*a)));
            cout<<'i'<<endl;
		}
	}
	return 0;
}


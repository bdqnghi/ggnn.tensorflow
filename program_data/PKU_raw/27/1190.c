//************************
//**?????????************
//**???  1300062709*****
//**2013.10.9*************
//************************


int main()



{
	double x1, x2;
	double x1i,x2i;
	double a, b, c, delta, squar;
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{ 
		cin>>a>>b>>c;
		delta=b*b-4*a*c;
		squar=sqrt(delta);
		if ( delta > 0 ) 
		{
				x1=(-b+squar)/(2*a);
		        x2=(-b-squar)/(2*a);
			cout<<fixed<<setprecision(5)<<"x1="<<x1<<";x2="<<x2<<endl;
		}
		else if(fabs(delta)<=10E-5)
		{
			x1=(-b+squar)/(2*a);
			cout<<fixed<<setprecision(5)<<"x1=x2="<<x1<<endl;
		}
		else 
		{
		  x1=-b/(2*a) ;
		  x1i=sqrt(4*a*c-b*b)/(2*a);
          x2i=-sqrt(4*a*c-b*b)/(2*a);
			if(fabs(x1)<=10E-5)
				x1=0;
			cout<<fixed<<setprecision(5)<<"x1="<<x1<<"+"<<x1i<<"i;x2="<<x1<<x2i<<"i"<<endl;
	}
	}


	return 0;
}


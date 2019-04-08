
int main()
{
 
	int n,i=0;
	cin >>n;

	for(i=1;i<=n;i=i+1)             //??
	{
		double a,b,c,d;
	     cin >>a>>b>>c; 
		 d=b*b-4*a*c;
		if (b==0)//??-0????
		{
		 if(d>0)
		 {
			 cout<<fixed;     //????????
			 cout<<setprecision(5)<<"x1="<<(b + sqrt(b*b-4*a*c))/(2*a) <<";x2="<<(b - sqrt(b*b-4*a*c))/(2*a)<<endl; 
		 }
		 else if (d==0)
		 {
			 cout<<fixed;
			cout<<setprecision(5)<< "x1=x2="<<(b )/(2*a) <<endl;  //????????
		 }
		 else 
		 {
			 cout<<fixed;
              cout<<setprecision(5)<<"x1="<<(b)/(2*a)<<"+"<<sqrt(-d)/(2*a)<<"i;x2="<<(b)/(2*a)<<"-"<<sqrt(-d)/(2*a)<<"i"<<endl;

		 }
		}
		else
		{
          if(d>0)
		 {
			 cout<<fixed;     //????????
			 cout<<setprecision(5)<<"x1="<<(-b + sqrt(b*b-4*a*c))/(2*a) <<";x2="<<(-b - sqrt(b*b-4*a*c))/(2*a)<<endl; 
		 }
		 else if (d==0)
		 {
			 cout<<fixed;
			cout<<setprecision(5)<< "x1=x2="<<(-b )/(2*a) <<endl;  //????????
		 }
		 else 
		 {
			 cout<<fixed;
              cout<<setprecision(5)<<"x1="<<(-b)/(2*a)<<"+"<<sqrt(-d)/(2*a)<<"i;x2="<<(-b)/(2*a)<<"-"<<sqrt(-d)/(2*a)<<"i"<<endl;

		 }
		}
	}
	return 0;
}

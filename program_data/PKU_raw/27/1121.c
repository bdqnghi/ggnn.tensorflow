int main()
{
	int n,i;
	cin >> n;
	for(i=0;i<n;i++)
	{    
		double a[100], b[100], c[100], d, x1 , x2, f, g;
	     
		 cin >> a[i] >> b[i]>> c[i];
		 d=b[i]*b[i]-4*a[i]*c[i];
		 if(d>0)
		 {
			x1 = (-b[i] + sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]) ;

		    x2 = (-b[i] - sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]) ; 
			cout << fixed << setprecision(5) << "x1=" << x1 << ";" << "x2=" << x2 << endl;
			
		 }
		 if(d==0)
		 { 
			 x1=x2=-b[i]/(2*a[i]);
			 cout << fixed << setprecision(5) << "x1=x2=" << x1 << endl;
			
		 }
		 if(d<0)
		 {
			 f=0-(b[i]/(2*a[i]));
			 g=sqrt(-d)/(2*a[i]);
			 cout << fixed << setprecision(5) << "x1=" << f<<"+"<< g<<"i"<<";"<<"x2=" << f <<"-"<< g<<"i" <<endl;
			 
		 }
		
	}
	return 0;
}
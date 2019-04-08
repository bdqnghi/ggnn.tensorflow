int main()
{
	int k,num;
	cin >> num;
	for ( k=0 ; k<num ; k++ ) 
	{
		double a,b,c,x1,x2,sb,xb;
        cin>>a>>b>>c;
		x1 = (-b + sqrt(b*b-4*a*c))/(2*a); 
        x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
		sb = -b/(2*a);
		xb = (sqrt(4*a*c-b*b))/(2*a);
		if (fabs(sb)<0.000001)                              
			sb=0;                                           
			cout<<fixed;
		if ((b*b-4*a*c)>=0) 
		{
			if (x1==x2) cout << setprecision(5) << "x1=x2=" << x1 << endl;
			else cout << setprecision(5) << "x1=" << x1 << ";" << "x2=" << x2 << endl;
		}
		else cout << setprecision(5) << "x1=" << sb << "+" << xb << "i" << ";" << "x2=" << sb << "-" << xb << "i" << endl;
	}
	return 0;
}

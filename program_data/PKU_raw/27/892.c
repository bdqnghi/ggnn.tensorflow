int main ()
{
	int n , i ;
	float a , b , c;
	double x1 , x2 , r , d ;
	cin >> n ;
	for (i = 1 ; i <= n ; i++)
	{
		cin >> a >> b >> c ;
		if (b*b-4*a*c>0)
		{
			x1 = (-b + sqrt (b * b - 4.0 * a * c ))/(2.0*a);
			x2 = (-b - sqrt (b * b - 4.0 * a * c ))/(2.0*a);
			if (b==0) 
			{
				b=0;
			}
			cout << fixed << setprecision(5) <<"x1=" << x1 << ";" << "x2=" << x2 << endl;
		}
		else 
		{
			if (b*b-4.0*a*c==0)
			{	
				x1 = x2 = (-b)/(2.0*a);
			    cout << fixed << setprecision(5) << "x1=x2=" << x1 << endl;
			}
		    else 
			{  
				if (b != 0) 
				{
					r = (-b)/(2*a) ;
				}
				else 
				{
					r = 0 ;
				}
				d = sqrt(4.0 * a * c -b*b)/(2*a);
				cout << fixed << setprecision(5) << "x1=" << r << "+" << d << "i" << ";" << "x2=" << r << -d << "i" << endl;
			}
		}
	}
	return 0 ;
}

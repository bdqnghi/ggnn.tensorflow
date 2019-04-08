int main()
{
	int n;			//n???????
	cin >> n;		//??n
	cout << fixed <<setprecision(5);
	for ( int i = 1;i <= n; i++)	//??i?1?n???
	{				//????
		double a,b,c;				//?????????a,b,c

		cin >> a >> b >> c;			//??a,b,c

		double delta = b*b-4*a*c;	//?????delta
		double line = -b/(2*a);     //??????-b/(2*a)
		if ( line == -0 )
			line = 0;
		if ( delta == 0 )			//??delta?0
			cout << "x1=x2=" << line << endl;		//??x1=x2
		else if (delta > 0)
			cout << "x1=" << line + sqrt(delta)/(2*a)
			     << ";x2="<< line - sqrt(delta)/(2*a)
				 << endl;
		else if (delta < 0)
			cout << "x1=" << line << "+"
			     << (sqrt(-delta))/(2*a)<< "i;"
				 << "x2=" << line << "-"
				 << (sqrt(-delta))/(2*a)<< "i"
				 << endl;
	}
	cin.get();
	cin.get();
	return 0;
}
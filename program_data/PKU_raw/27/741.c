int main()
{
	int n, i;                         //???????????
	double a, b, c, deta, x1, x2, t;   //???????????-b/2a
	cin >> n;                           //??????
	cout << fixed << setprecision(5);     //??????
	for(i = 1;i<=n;i++)                 
	{
		cin >> a >> b >> c;
		t = - b / ( 2 * a );
		deta = b * b - 4 * a * c;                 //??t?deta(???)
		
		//?deta>0??????
		if(deta > 0)                     
		{
			x1 = ( - b + sqrt(deta) ) / ( 2 * a );
			x2 = ( - b - sqrt(deta) ) / ( 2 * a );
			cout << "x1=" << x1 << ";" << "x2=" << x2 << endl;
		}

		//??????????
		else if(deta==0) cout << "x1=x2=" << t << endl;
		else
		{
			deta = -deta;
			if(t==0) t = 0;                           //??0?????????
			cout << "x1=" << t << "+" << sqrt(deta) / (2 * a ) << "i;x2="
				 << t << "-" << sqrt(deta) / ( 2 * a ) << "i" << endl;    //?????
		}
	}
	return 0;
}


	
	





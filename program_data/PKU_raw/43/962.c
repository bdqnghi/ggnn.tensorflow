int main()
{
	int a, b;
	double m;
	cin >> m;
	a = 0.5 * (m);
	for(b = 3;b <= a; b++)
	{ 
		for(int d = b - 1;d >= 2; d--)
		{
			if (b % d == 0) break;
			if (d == 2)
				{
			     int e;e = m - b;
				 for(int f = e - 1;f >= 2; f--)
				 {
					 if(e % f == 0) break;
					 
					 if (f == 2)
					 { 
						 cout << b << " " ;
						 cout << e << endl;
					 }
				 }
				}
		}
	}
	return 0;
}

 
 
 

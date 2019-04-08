

int main()
{
	int n;
	int i;
	int temp;
	double a = 0, b = 0, c = 0, d = 0;
	double ra, rb, rc, rd;

	cin >> n;

	for(i = 0; i < n; i ++)
	{
		cin >> temp;

		if(1 <= temp && temp <= 18)
			a ++;
		else if(19 <= temp && temp <= 35)
			b ++;
		else if(36 <= temp && temp <= 60)
			c ++;
		else
			d ++;
	}

	ra = a * 100 / n;
	rb = b * 100 / n;
	rc = c * 100 / n;
	rd = d * 100 / n;

	cout << "1-18: " << fixed << setprecision(2) << ra << '%' << endl;
	cout << "19-35: " << rb << '%' << endl;
	cout << "36-60: " << rc << '%' << endl;
	cout << "Over60: " << rd << '%' << endl;

	
	

}
int main ()
{
	int n, a[10], b[10], num = 0;
	int i;
	double G = 0, c[10];
	cin >> n;
	for(i = 0; i < n; i ++)
		cin >> a[i];
	for(i = 0; i < n; i ++)
		cin >> b[i];
	for(i = 0; i < n; i ++)
	{
		if(b[i] >= 90 && b[i] <= 100)
			c[i] = 4.0;
		else if(b[i] >= 85)
			c[i] = 3.7;
		else if(b[i] >= 82)
			c[i] = 3.3;
		else if (b[i] >= 78)
			c[i] = 3.0;
		else if(b[i] >= 75)
			c[i] = 2.7;
		else if(b[i] >= 72)
			c[i] = 2.3;
		else if(b[i] >= 68)
			c[i] = 2.0;
		else if(b[i] >= 64)
			c[i] = 1.5;	
		else if(b[i] >= 60)
			c[i] = 1.0;	
		else 
			c[i] = 0;
		num += a[i];
		G += a[i] * c[i];
	}
	G = G / num;
	cout << fixed << setprecision(2) << G << endl;
	return 0;
}

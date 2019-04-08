//********???????******************
//********?????2012?10?22?********
//********????????****************
//********???1200062701***************



int main()
{
	int a, b, c, e, n, y, d = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> y;
		cin >> a >> b;
		if(a > b) e = a, c = b, a = c, b = e;
		for (int e = a ; e < b; e++)
		{
			if ((y % 400 == 0) || ((y % 100 != 0) && (y % 4 == 0)))
		    {
				switch(e)
				{
					case 1 : d = d + 31; break;
					case 2 : d = d + 29; break;
					case 3 : d = d + 31; break;
					case 4 : d = d + 30; break;
					case 5 : d = d + 31; break;
					case 6 : d = d + 30; break;
					case 7 : d = d + 31; break;
					case 8 : d = d + 31; break;
					case 9 : d = d + 30; break;
					case 10 : d = d + 31; break;
					case 11 : d = d + 30; break;
				}
			}
			else 
			{
				switch(e)
				{
					case 1 : d = d + 31; break;
					case 2 : d = d + 28; break;
					case 3 : d = d + 31; break;
					case 4 : d = d + 30; break;
					case 5 : d = d + 31; break;
					case 6 : d = d + 30; break;
					case 7 : d = d + 31; break;
					case 8 : d = d + 31; break;
					case 9 : d = d + 30; break;
					case 10 : d = d + 31; break;
					case 11 : d = d + 30; break;
				}
			}	
		}
		if (d % 7 == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
		d = 0;
	}
	return 0;
}

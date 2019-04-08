//********************************
//*?????????   **
//*?????? 1200012837 **
//*???2012.10.22  **
//********************************

int main()
{
	int m;
	double x, y;
	cin >> m;
	for(x = 3; x <= m / 2; x += 2)
	{
		int i = 2;
		for(; i <= (int)sqrt(x); i++)
		{
			if((int)x % i == 0)
				break;
		}
		if(i == (int)sqrt(x) + 1)
		{
			y = m - x;
			int k = 2;
			for(; k <= (int)sqrt(y); k++)
			{
				if((int)y % k == 0)
					break;
			}
			if(k == (int)sqrt(y) + 1)
				cout << x << " " << y << endl;
		}
	}

	return 0;
}

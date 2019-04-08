int main ()
{
	int n = 0;										//????n
	int x = 0;										//?????
	cin >> n;
	int y = 0;										//????
	for (;;)
	{
		if ( n == 1 ) 
		{
			cout << "End";
			break;
		}
		else
		{
			y = n % 2;
			if ( y == 1 ) 
			{
				x = n * 3 + 1;
				cout << n << "*3+1=" << x << endl;
			}
			else
			{
				x = n / 2;
				cout << n << "/2=" << x << endl;
			}
			n = x;
		}
	}
	return 0;
}
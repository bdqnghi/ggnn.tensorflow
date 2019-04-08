int main()
{
	int n, total, valid;
	float x, y;
	cin >> n;
	cin >> total >> valid;
	x = (float)valid / total;
	for (int i = 1; i <= n-1; i++)
	{
		cin >> total >> valid;
		y = (float)valid / total;
		if (y - x > 0.05)
		{
			cout << "better" << endl;
		}
		else 
		{ 
			if (y - x < -0.05)
			{
				cout << "worse" << endl;
			}
			else cout << "same" << endl;
		}
	}
	return 0;
}
				 

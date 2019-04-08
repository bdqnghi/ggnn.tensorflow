int main()
{
	int n , i ;
	double y , a , b , a1 , b1;

	cin >> n >> a >> b;

	for (i = 1; i <= n - 1; i ++)
	{
		cin >> a1 >> b1;
		
		y = b1 / a1 - b / a;
		
		if (y > 0.05)
			cout << "better" << endl;
		
		else if (y < -0.05)
			cout << "worse" << endl;
		
		else
			cout << "same" << endl;
	}
	return 0;
}
	
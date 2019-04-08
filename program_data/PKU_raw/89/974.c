

int main()
{ 
	int a[100000] = {0};
	int n, x, y, i;
	cin >> n;
	while (1)
	{
		cin >>  x >> y;
		if (y == 0 && x == 0)
			break; 
		(*(a + y))++;
		(*(a + x))--;
	}
	for (i =  0; i < n; i++)
	{
		if (*(a + i) == n - 1)
		{
			cout << i << endl;
			break; 
		} 
	}
	if (i == n)
		cout << "NOT FOUND" << endl;
	return 0;
}
int main()
{
	int n, a[60] = {0}, b, i, x; 
	cin >> n;
	while (n != 0)
	{
		cin >> b; // b?????? 
		for (i = 1; i <= b; i++)
		{ 
			cin >> a[i]; // ???i????????? 
		} 
		for (i = b; ; i--)
		if ((a[i] + 3 * (i - 1)) <= 60) 
			break;	
		if (a[i] + 3 * i >= 60) 
			x = a[i]; // ??????? 
		else
			x = 60 - 3 * i; // ??????? 
		cout << x << endl;
		n--;		
	}
	return 0;
}

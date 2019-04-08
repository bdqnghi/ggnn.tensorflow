int main()
{
	char a[1000], c;
	int n = 0;
	cin >> a;
	if (a[0] >= 'a' && a[0] <= 'z')
		c = a[0] - 'a' + 'A';
	else
		c = a[0];
	cout << "(" << c << ","; 
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == c || a[i] == c - 'A' + 'a')
		{
			n++;
		}
		else
		{
			if (a[0] >= 'a' && a[0] <= 'z')
				c = a[i] - 'a' + 'A';
			else
				c = a[i];
			cout << n << ")(" << c << ",";
			n = 1;
		}
	}
	cout << n << ")" << endl;
	return 0;
}
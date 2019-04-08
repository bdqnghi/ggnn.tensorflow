

int main()
{
	int n, istrue, len, i;
	char a[81];
	cin >> n;
	cin.get();
	while(n --)
	{
		cin.getline(a, 81);
		len = strlen(a);
		istrue = 1;
		if ((a[0] != '_') && (a[0] < 'a' || a[0] > 'z') && (a[0] < 'A' || a[0] > 'Z'))
			istrue = 0;
		for (i = 1; i < len; i ++)
			if ((a[i] != '_') && (a[i] < 'a' || a[i] > 'z') && (a[i] < 'A' || a[i] > 'Z') && (a[i] > '9' || a[i] < '0'))
				istrue = 0;
		cout << istrue << endl;
	}
}
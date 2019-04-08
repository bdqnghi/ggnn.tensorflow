
int main ()
{
	char a[101];
	int i = 0, yushu = 0 , b[101] = {0}, k = 0;
	cin.getline(a, 100);
	while (a[i] != '\0')
	{
		b[i] = (yushu * 10 + a[i] - '0') / 13;
		yushu = (yushu * 10 + a[i] - '0') % 13;
		i++;
	}
	k = i - 1;
	if (k == 0)
		cout << "0" << endl << a[0] << endl;
	else 
	{
		if ((a[0] - '0') * 10 + a[1] - '0' < 13 && k == 1)
		{
			cout << ((a[0] - '0') * 10 + a[1] - '0') / 13 << endl;
			cout << ((a[0] - '0') * 10 + a[1] - '0') % 13 << endl;
		}
		else
		{
			if ((a[0] - '0') * 10 + a[1] - '0' < 13 && k > 1)
				i = 2;
			else
				i = 1;
			for (i; i <= k; i++)
				cout << b[i];
			cout << endl;
			cout << yushu << endl;
		}
	}
	return 0;
}
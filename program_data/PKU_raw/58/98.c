int main ()
{
	char a[81];
	int n, i, j, lon;
	cin >> n;
	cin.get();
	for ( i = 1; i <= n; i ++)
	{

		cin.getline(a,81);
		lon = strlen(a);
		for (j = 0; j < lon; j ++)
		{
			if (j == 0)
			{
				if(a[j] != '_' && (a[j] < 'a' || a[j] > 'z') && ( a[j] < 'A' || a[j] > 'Z'))
					break;
			}
			else
			{
				if(a[j] != '_' && (a[j] < 'a' || a[j] > 'z') && ( a[j] < 'A' || a[j] > 'Z') && (a[j] < '0' || a[j] > '9'))
					break;
			}
		}
		if (j == lon)
			cout << '1' << endl;
		else
			cout << '0' << endl;
	}
	return 0;
}

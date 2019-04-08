int main ()
{ 
	int number = 0;
	int inum[1000] ;
	int b, e;
	int p = 0;
	char cnum[1000];
	cin >> b >> cnum >> e;
	int len = strlen (cnum);
	int i;
	for (i = len - 1; i >= 0; i--)
	{
		if ( cnum [i] >= '0' && cnum[i] <= '9')
			inum[p++] = cnum[i] - '0';
		else if (cnum[i] >= 'a' && cnum[i] <= 'z')
			inum[p++] = cnum[i] - 'a' + 10;
		else inum[p++] = cnum[i] - 'A' + 10;
	}
	for (i = p - 1; i > 0; i--)
	{
		number = (number + inum[i]) * b;
	}
	int temp;
	number += inum[0];
	if (number == 0)
		cout << "0" << endl;
	for (i = 0; number > 0; i++)
	{
		temp = number % e;
		number = number / e;
		if (temp <= 9 && temp >= 0)
			cnum[i] = temp + '0';
		else 
			cnum[i] = temp + 'a' - 42;
	}
	for (p = i - 1; p >= 0; p--)
		cout << cnum[p];
	cout << endl;
	return 0;
}

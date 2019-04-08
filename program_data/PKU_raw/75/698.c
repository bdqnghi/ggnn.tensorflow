//**********************************
//*??:????? ***
//*??:??? 1300012991 ***
//*??:2013?11?4? ***
//**********************************

int main()
{
	int n, i, j, count, num = 1; //????
	int a[1000] = {0};
	int b[1000] = {0};
	char sp; //????sp
//	int *a = new int [n]; //????a?b
//	int *b = new int [n];
	for (i = 0; ; i++) //??a????????????
	{
		cin >> a[i];
		sp = getchar();
		if (sp == '\n')
			break;
	}
	n = i + 1;
	for (i = 0; i < n; i++) //??b????????????
	{
		cin >> b[i];
		sp = getchar();
		if (sp == '\n')
			break;
	}
	for (i = 1; i < 1002; i++) //???????????????
	{
		count = 0;
		for (j = 0; j < n; j++)
		{
			if (i >= a[j] && i < b[j])
				count = count++;
		}
		num = (count > num ? count: num); //????
	}
	cout << n << " " << num;
	return 0;
}

//*******************************************************
//* file: 3.cpp
//* description: ??13
//* author: ?? 1200012858
//* date: 2012-11-18
//*******************************************************
int main ()
{
	char num[100] = {""};
	int a[101];
	memset(a, -1, sizeof(a)); // ??????-1
	int i, j, k, r = 0, count = 0;
	cin >> num;
	for (i = 0; num[i] != 0; i++)
	{
		 a[i] = (r * 10 + num[i] - '0') / 13;
		 r = (r * 10 + num[i] - '0') % 13;
	}
	if(a[1] == -1)
		cout << 0;
	if (a[0] == 0 && a[1] == 0 && a[2] == -1)
		cout << 0;
	for (k = 0; ; k++)
	{
		if (a[k] != 0) break;
	}
	for (j = k; j < i; j++)
	{
		cout << a[j];
	}
	cout << endl;
	cout << r << endl;
	return 0;
}



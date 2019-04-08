//**********************************
//*  ????homework_5.cpp        *
//*  ??????1200012884        * 
//*  ?????2012?12?17?      *
//*  ???????2?N?? 
//**********************************
int main()
{
	int n, temp, len;
	cin >> n;
	int i, j;
	int a[100] = {0};
	a[0] = 1;
	len = 1;
	for (i = 0;i < n;i++)
	{
		temp = 0;
		for (j = 0;j < len;j++)
		{
			a[j] = a[j] * 2 + temp;
			temp = floor(a[j] / 10);
			a[j] = a[j] % 10;
		}
		if (temp > 0)
		{
			a[j] = temp;
			len++;
		}
	}
	for (i = len - 1;i >= 0;i--)
		cout << a[i];
	cout << endl;
	return 0;
}
	
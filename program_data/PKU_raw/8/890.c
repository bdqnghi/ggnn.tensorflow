/*
 *????????.cpp
 *?????
 *????: 2012-11-27
 *??????????????????????????
 */


void programme(){
	int n1, n2, i, j, temp;
	int a[101], b[101];
	cin >> n1 >> n2;
	for (i = 0; i < n1; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < n2; i++)
	{
		cin >> b[i];
	}
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n1 - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < n2; i++)
	{
		for (j = 0; j < n2 - i - 1; j++)
		{
			if (b[j] > b[j + 1])
			{
				temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < n1; i++)
		cout << a[i] << " ";
	for (i = 0; i < n2; i++)
	{
		if (i != n2 - 1)
			cout << b[i] << " ";
		else
			cout << b[i];
	}
	return;
}

int main (){
	programme();
	return 0;
}

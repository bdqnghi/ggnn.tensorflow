
int main()
{
	char x[251], y[251];
	int i, j, array[251];
	for (i = 0; i < 251; i ++)
		array[i] = 0;
	cin >> x >> y;
	if (x[0] == '0' && y[0] == '0' && strlen(x) == 1 && strlen(y) == 1)
		cout << 0;
	for (i = 0; i < strlen(x) && i < strlen(y); i ++)
	{
		array[i] = array[i] + x[strlen(x) - i - 1] + y[strlen(y) - i - 1] -2 * '0';
		if (array[i] > 9)
		{
			array[i + 1] ++;
			array[i] = array[i] - 10;
		}
	}
	if (strlen(x) >= strlen(y))
		for (j = i; j < strlen(x); j ++)
		{
			array[j] = array[j] + x[strlen(x)- j - 1] - '0';
			if (array[j] > 9)
			{
				array[j + 1] ++;
				array[j] = array[j] - 10;
			}
		}
	else
        for (j = i; j < strlen(y); j ++)
		{
			array[j] = array[j] + y[strlen(y)- j - 1] - '0';
			if (array[j] > 9)
			{
				array[j + 1] ++;
				array[j] = array[j] - 10;
			}
		}
	for (i = 250; array[i] == 0; i --){}
	for (j = i; j >= 0; j --)
		cout << array[j];
	cout << endl;
	return 0;
}

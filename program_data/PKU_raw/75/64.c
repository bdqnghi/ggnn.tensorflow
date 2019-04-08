int main()
{
	int a[1001], b[1001], num = 1, i, j, temp = 0, max = 0;
	char c;
	do 
	{
		cin >> a[num];
		cin.get(c);
		num++;
	}while (c == ',');
	num = 1;
	do 
	{
		cin >> b[num];
		cin.get(c);
		num++;
	}while (c == ',');
	cout << num - 1;
	num--;
	for (i = 0; i < 1000; i++)
	{
		for (j = 1; j <= num; j++)
		{
			if (i >= a[j] && i < b[j])
				temp++;
		}
		if (max < temp)
			max = temp;
		temp = 0;
	}
	cout << ' ' << max << endl;
	return 0;
}
int main()
{
	int a[1000], b[1000], t[1000] = {0};
	int i, j, count, maxNum = 0;
	i = 0;
	do
	{
		cin >> a[i];
		i++;
	} while (cin.get() != '\n');
	count = i;
	i = 0;
	do
	{
		cin >> b[i];
		i++;
		cin.get();
	} while (i < count);
	for (i = 0; i < count; i++)
		for (j = a[i]; j < b[i]; j++)
			t[j]++;
	for (i = 0; i < 1000; i++)
		if (t[i] > maxNum)
			maxNum = t[i];
	cout << count << " " << maxNum;
	return 0;
}

int main()
{
	int n, i, j, temp, num1 = 0, num2 = 100, age[100], flag[100];
	char id[100][10], str[10];
	cin >> n;
	for (i = 0; i < n; i ++)
	{
		cin.get();
		cin >> id[i] >> age[i];
		if (age[i] < 60)
			flag[i] = num1 ++;
		else
			flag[i] = num2 ++;
	}
	for (i = 0; i < n - 1; i ++)
	{
		for (j = i + 1; j < n; j ++)
		{
			if (age[i] < age[j] && age[j] >= 60)
			{
				temp = flag[i];
				flag[i] = flag[j];
				flag[j] = temp;
				temp = age[i];
				age[i] = age[j];
				age[j] = temp;
				strcpy(str, id[i]);
				strcpy(id[i], id[j]);
				strcpy(id[j], str);
			}
		}
	}
	for (i = 0; i < n - 1; i ++)
	{
		for (j = i + 1; j < n; j ++)
		{
			if (age[i] == age[j] && age[i] >= 60 && age[j] >= 60 && flag[i] > flag[j] || age[i] < 60 && age[j] < 60 && flag[i] > flag[j])
			{
				temp = flag[i];
				flag[i] = flag[j];
				flag[j] = temp;
				temp = age[i];
				age[i] = age[j];
				age[j] = temp;
				strcpy(str, id[i]);
				strcpy(id[i], id[j]);
				strcpy(id[j], str);
			}
		}
	}
	for (i = 0; i < n; i ++)
		cout << id[i] << endl;
	return 0;
}

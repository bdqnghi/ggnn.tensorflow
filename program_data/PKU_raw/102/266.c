int main()
{
	int n, i, j, count_male = 0, count_female = 39, emp;
	char sex[7];
	double hight[40];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> sex;
		if (strcmp(sex, "female"))
			cin >> hight[count_male++];
		else
			cin >> hight[count_female--];
	}
	for (i = 0; i < count_male; i++)
	{
		emp = 0;
		for (j = 1; j < count_male; j++)
		{
			if (hight[j] <= hight[emp])
				emp = j;
		}
		cout << fixed << setprecision(2) <<hight[emp] << " ";
		hight[emp] = 3;
	}
	for (i = 39; i > count_female; i--)
	{
		emp = 39;
		for (j = 38; j > count_female; j--)
		{
			if (hight[j] >= hight[emp])
				emp = j;
		}
		cout << hight[emp];
		if (i != count_female+1)
			cout << " ";
		hight[emp] = 0;
	}
return 0;
}
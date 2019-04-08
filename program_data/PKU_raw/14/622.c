



struct person
{
	char num[6];
	int Chinese;
	int math;
	int total;
}stu[100000];

int main()
{
	int n, i, max, j, k, temp = 0,tnum = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> stu[i].num;
		cin >> stu[i].Chinese;
		cin >> stu[i].math;
		stu[i].total = stu[i].math + stu[i].Chinese;

	}
	for (j = 0; j < 3; j++)
	{
		max = 0;
		for (i = 0; i < n; i++)
		{
			if (stu[i].total > max)
			{
				max = stu[i].total;
				k = i;
			}	
		}
		cout << stu[k].num << " " << stu[k].total << endl;
		stu[k].total = 0;
	}
	return 0;
}
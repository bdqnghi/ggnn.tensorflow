struct student
{
	int number;
	int chinese;
	int math;
	int num;
}stu[100001];
int main ( )
{
	int n, i, j, max[3][2] = {0};
	cin >> n;
	for(i = 0;i < n;i++)//??????????
	{
		cin >> stu[i].number >> stu[i].chinese >> stu[i].math;
		stu[i].num = stu[i].chinese + stu[i].math;
	}
	for(j = 0;j < 3;j++)//??3??????
	{
		for(i = 0;i < n;i++)
		{
			if(stu[i].num > max[j][0])
			{
				max[j][0] = stu[i].num;
				max[j][1] = i + 1;
			}
		}
		stu[max[j][1]-1].num = 0;
	}
	for(j = 0;j < 3;j++)//?????
	{
		cout << max[j][1] << ' ' << max[j][0] << endl;
	}
	return 0;
}
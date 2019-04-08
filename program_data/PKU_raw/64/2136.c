//********************
//**???????	**
//**?????		**
//**???2013.12.15**
//**????4.cpp	**
//********************
int main()
{
	int n, i, j, cnt= 0, p[10][3];
	double sum;
	struct distance // ??????????????
	{
		int x1;
		int y1;
		int z1;
		int x2;
		int y2;
		int z2;
		double dist;
	}group[45], temp;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> p[i][0] >> p[i][1] >> p[i][2]; // ??????
	for (i = 0; i < n - 1; i++)
		for (j = 1; j < n - i; j++)
		{
			group[cnt].x1 = p[i][0];
			group[cnt].y1 = p[i][1];
			group[cnt].z1 = p[i][2];
			group[cnt].x2 = p[i + j][0];
			group[cnt].y2 = p[i + j][1];
			group[cnt].z2 = p[i + j][2];
			sum = (p[i][0] - p[i + j][0]) * (p[i][0] - p[i + j][0]) + 
				(p[i][1] - p[i + j][1]) * (p[i][1] - p[i + j][1]) + 
				(p[i][2] - p[i + j][2]) * (p[i][2] - p[i + j][2]);
			group[cnt].dist = sqrt(sum); // ????????????????????
			cnt++;
		}
	for (i = 0; i < n * (n - 1) / 2 - 1; i++)
		for (j = 0; j < n * (n - 1) / 2 - 1 - i; j++)
			if (group[j].dist < group[j + 1].dist) // ???????????????
			{
				temp = group[j];
				group[j] = group[j + 1];
				group[j + 1] = temp;
			}
	for (i = 0; i < n * (n - 1) / 2; i++)
	{
		cout << '(' << group[i].x1 << ',' << group[i].y1 << ',' << group[i].z1 << ')' << '-' 
		<< '(' << group[i].x2 << ',' << group[i].y2 << ',' << group[i].z2 << ')' << '=';
		printf("%.2f", group[i].dist); // ??????????????
		cout << endl;
	}
	return 0;
}
	
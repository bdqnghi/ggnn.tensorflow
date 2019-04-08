int main()
{
	int n, i, j, k, c[10][3], temp = 0,count = 0;
	cin >> n;
	struct 
	{
		int a[3];
		int b[3];
		int flag1;
		int flag2;
		double distance;
	}dian[46] = {0};
	for (i = 0; i < n; i++)
		for (j = 0; j < 3; j++)
			cin >> c[i][j];
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
		{
			temp = 0;
			for (k = 0; k < 3; k++)
			{
				dian[count].a[k] = c[i][k];
				dian[count].b[k] = c[j][k];
				dian[count].flag1 = i;
				dian[count].flag2 = j;
				temp = temp + (c[i][k] - c[j][k]) * (c[i][k] - c[j][k]);
			}
			dian[count].distance = sqrt(temp);
			count++;
		}
	for (i = count - 1; i >= 0; i--)
		for (j = count - 1; j >= 0; j--)
			if ((dian[i].distance > dian[j].distance && i > j) || ((dian[i].distance == dian[j].distance) && ((dian[i].flag1 < dian[j].flag1 && i > j) || (dian[i].flag1 == dian[j].flag1 && dian[i].flag2 < dian[j].flag2 && i > j))))
			{
				dian[45] = dian[i];
				dian[i] = dian[j];
				dian[j] = dian[45];
			}
	for (i = 0; i < count; i++)
		cout << "(" << dian[i].a[0] << "," << dian[i].a[1] << "," << dian[i].a[2] << ")" << "-" << "(" << dian[i].b[0] << "," << dian[i].b[1] << "," << dian[i].b[2] << ")" << "=" << fixed << setprecision(2) << dian[i].distance << endl;
	return 0;
}
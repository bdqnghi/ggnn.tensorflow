
struct position
{
	int x;
	int y;
	int z;
}pos[10];
int main()
{
	int n, finish[10][10] = {0}, cnt = 0;
	float d[10][10] = {0}, square = 0, max = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> pos[i].x >> pos[i].y >> pos[i].z;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			square = (pos[i].x - pos[j].x) * (pos[i].x - pos[j].x) + (pos[i].y - pos[j].y) * (pos[i].y - pos[j].y) +
			 (pos[i].z - pos[j].z) * (pos[i].z - pos[j].z);
			d[i][j] = sqrt(square);
		}
	}
	for (int k = 0; k < n * (n - 1) / 2; k++, max = 0)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (max < d[i][j] && finish[i][j] == 0)
					max = d[i][j];
			}
		}
		for (int p = 0; p < n; p++)
		{
			for (int q = 0; q < n; q++)
			{
				if (max == d[p][q])
				{
					finish[p][q] = 1;
					cnt++;
					cout << "(" << pos[p].x << ',' << pos[p].y << ',' << pos[p].z << ")-(" << pos[q].x << ',' << pos[q].y << ',' << pos[q].z << ")=" << fixed << setprecision(2) << d[p][q] << endl;
				}
			}
		}
		if (cnt == n * (n - 1) / 2)
			break;
	}
	return 0;
}
		
			
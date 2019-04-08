/**
* @file 1000012800_3.cpp
* @author ??
* @date 2010-12-15
* @description
* ??????:?????? 
*/

int main()
{
	int n, dot[100][3], count = -1;
	double counter[5000][3], tmp;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> dot[i][0] >> dot[i][1] >>  dot[i][2];
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			count++;
			counter[count][0] = sqrt((double)((dot[i][0] - dot[j][0]) * (dot[i][0] - dot[j][0]) +
				(dot[i][1] - dot[j][1]) * (dot[i][1] - dot[j][1]) +
				(dot[i][2] - dot[j][2]) * (dot[i][2] - dot[j][2])));
			counter[count][1] = i;
			counter[count][2] = j;
		}
	for (int i = 0; i < count; i++)
		for (int j = count; j > i; j--)
		{
			if (counter[j][0] > counter[j - 1][0])
			{
				for (int k = 0; k < 3; k++)
				{
					tmp = counter[j][k];
					counter[j][k] = counter[j - 1][k];
					counter[j - 1][k] = tmp;
				}
			}
		}
	for (int i = 0; i <= count; i++)
	{
		cout << "(" << dot[(int)counter[i][1]][0] << "," << 
			dot[(int)counter[i][1]][1] << ","  <<dot[(int)counter[i][1]][2] <<
			")-("<< dot[(int)counter[i][2]][0] << "," << dot[(int)counter[i][2]][1] <<
			"," << dot[(int)counter[i][2]][2] << ")=" << setprecision(2) << fixed << counter[i][0] << endl;
	}
	return 0;
}


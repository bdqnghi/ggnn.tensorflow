//******************************************
//*???????.cpp                     **
//*??: ??     1100012808              **
//*???2011.12.07                       **
//******************************************
double d[45];
int n;
void maopaopaixu(double d[])
{
	int i, j;
	double t;
	for (i = 0; i < n * (n - 1) / 2; i++)
	{
		for (j = 0; j < n * (n - 1) / 2 - i; j++)
		{
			if (d[j] < d[j + 1])
			{
				t = d[j];
				d[j] = d[j + 1];
				d[j + 1] = t;
			}
		}
	}
}
int main()  //???
{        //?????
	int i, j, k = 0, flag, a[11][3] = {0}, g[10][10] = {0};
	double b[10][10] = {0.0};
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i][0] >> a[i][1] >> a[i][2];
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			d[k] = sqrt((a[i][1] - a[j][1]) * (a[i][1] - a[j][1]) +
				(a[i][0] - a[j][0]) *(a[i][0] - a[j][0]) +
				(a[i][2] - a[j][2]) * (a[i][2] - a[j][2]));
			b[i][j] = d[k];
			k++;
		}
	}
	maopaopaixu(d);
	for (k = 0; k < n * (n - 1) / 2; k++)
	{
		flag = 0;
		for (i = 0; i < n; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (fabs(b[i][j] - d[k]) < 0.00000001 && g[i][j] == 0)
				{
					cout << "(" << a[i][0] << "," <<
						a[i][1] << "," << 
						a[i][2] << ")" << "-" << "(" <<
						a[j][0] << "," <<
						a[j][1] << "," <<
						a[j][2] << ")" << "=" << fixed << 
						setprecision(2) << d[k] << endl;
					flag = 1;
					g[i][j] = 1;
					break;
				}
				
			}
			if (flag)
					break;
		}
	}
	return 0;
} //?????

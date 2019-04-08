//**********************************************************
//*  ?????1.cpp                                       *
//*  ??????1200012906                                *
//*  ???2012?12?10?                                  *
//*  ?????????                                    *
//**********************************************************

struct
{
    int id;
	int x1;
	int y1;
	int z1;
	int x2;
	int y2;
	int z2;
	double distance;
}date[55], t;
int main()
{
	int n, x[10], y[10], z[10], i, j, k = 0;
	cin >> n;
	for(i = 0; i < n; i++)
		cin >> x[i] >> y[i] >> z[i];
	for(i = 0; i < n - 1; i++)
		for(j = i + 1; j < n; j++)
		{
			date[k].id = k;
			date[k].x1 = x[i];
			date[k].y1 = y[i];
			date[k].z1 = z[i];
			date[k].x2 = x[j];
			date[k].y2 = y[j];
			date[k].z2 = z[j];
			date[k].distance = pow(x[i] - x[j], 2.0) + pow(y[i] - y[j], 2.0) + pow(z[i] - z[j], 2.0);
			k++;   //k???????????
		}
	for(i = k - 2; i >= 0; i--)
		for(j = k - 1; j >= i + 1; j--)
		{
			if (date[i].distance < date[j].distance || date[i].distance == date[j].distance && date[j].id < date[i].id)
			{   //???????????????
				t = date[i];
				date[i] = date[j];
				date[j] = t;
			}
		}
	for(i = 0; i < k; i++)
	{
		cout << "(" << date[i].x1 << "," << date[i].y1 << "," << date[i].z1 << ")-(";
		cout << date[i].x2 << "," << date[i].y2 << "," << date[i].z2 << ")=";
		cout << fixed << setprecision(2) << sqrt(date[i].distance) << endl;
	}
	return 0;
}
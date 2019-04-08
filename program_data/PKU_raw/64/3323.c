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
}data[55], t;
int main()
{
	int n, x[10], y[10], z[10], i, j, k = 0;
	cin >> n;
	for(i = 0; i < n; i++)
		cin >> x[i] >> y[i] >> z[i];
	for(i = 0; i < n - 1; i++)
		for(j = i + 1; j < n; j++)
		{
			data[k].id = k;
			data[k].x1 = x[i];
			data[k].y1 = y[i];
			data[k].z1 = z[i];
			data[k].x2 = x[j];
			data[k].y2 = y[j];
			data[k].z2 = z[j];
			data[k].distance = pow(x[i] - x[j], 2.0) + pow(y[i] - y[j], 2.0) + pow(z[i] - z[j], 2.0);
			k++;   //k???????????
		}
	for(i = 0; i < k - 1; i++)

		for(j = 0; j < k - i - 1; j++)
		{
			if (data[j].distance < data[j + 1].distance)
			{   //??????
				t = data[j];
				data[j] = data[j + 1];
				data[j + 1] = t;
			}
		}
	for(i = 0; i < k; i++)
	{
		cout << "(" << data[i].x1 << "," << data[i].y1 << "," << data[i].z1 << ")-(";
		cout << data[i].x2 << "," << data[i].y2 << "," << data[i].z2 << ")=";
		cout << fixed << setprecision(2) << sqrt(data[i].distance) << endl;
	}
	return 0;
}
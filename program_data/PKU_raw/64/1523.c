//********************************************************
//*  ???:1.cpp                                        *
//*  ??????    1200012948                          *
//*  ????: 2012 12 09                                *
//*  ????:????                                   *
//********************************************************
struct shuju  //????????????????
{
	int xx;
	int yy;
	double dis;
} sj[100], temp;
struct distance  //????????
{
	int x;
	int y;
	int z;
}point[10];
int main()
{
	int n, i, j, k = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> point[i].x >> point[i].y >> point[i].z;
	}
	for (i = 1; i < n; i++)
		for(j = i + 1; j <= n; j++)
		{
			k++;
			double m = (point[i].x - point[j].x) * (point[i].x - point[j].x)
					+ (point[i].y - point[j].y) * (point[i].y - point[j].y)
					+ (point[i].z - point[j].z) * (point[i].z - point[j].z);
			sj[k].dis = sqrt(m);
			sj[k].xx = i;
			sj[k].yy = j;
		}
	for (i = 1; i < n * (n - 1) / 2; i++)   //??
		for (j = 1; j <= n * (n - 1) / 2 - i; j++)
		{
			if (sj[j].dis < sj[j + 1].dis)
			{
				temp =sj[j];
				sj[j] = sj[j + 1];
				sj[j + 1] = temp;
			}
		}
	for (i = 1; i <= n * (n - 1) / 2; i++)
	{
		cout << "(" << point[sj[i].xx].x << "," << point[sj[i].xx].y << "," << point[sj[i].xx].z << ")"
			<< "-" << "(" << point[sj[i].yy].x << "," << point[sj[i].yy].y << "," << point[sj[i].yy].z << ")"
			<< "=" << fixed << setprecision(2) << sj[i].dis << endl;
	}
	return 0;

}

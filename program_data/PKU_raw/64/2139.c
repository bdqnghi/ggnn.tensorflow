struct
{
	int x;
	int y;
	int z;
} dot[10];
struct
{
	int f1;
	int f2;
	double dis;
} d[55], t;
int main()
{
	int n, i, j, c = 0, x1, y1, z1;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> dot[i].x >> dot[i].y >> dot[i].z;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			x1 = (dot[i].x - dot[j].x) * (dot[i].x - dot[j].x);
			y1 = (dot[i].y - dot[j].y) * (dot[i].y - dot[j].y);
			z1 = (dot[i].z - dot[j].z) * (dot[i].z - dot[j].z);
			d[c].f1 = i;
			d[c].f2 = j;
			d[c++].dis = sqrt(x1 + y1 + z1);
		}
	}
	for (i = 0; i < c; i++)
		for (j = c - 1; j > i; j--)
		{
			if (d[j].dis > d[j - 1].dis)
			{
				t = d[j - 1];
				d[j - 1] = d[j];
				d[j] = t;
			}
		}
	for (i = 0; i < c; i++)
	{
		cout << '(' << dot[d[i].f1].x << ',' << dot[d[i].f1].y << ',' << dot[d[i].f1].z << ")-("
			<< dot[d[i].f2].x << ',' << dot[d[i].f2].y << ',' << dot[d[i].f2].z << ")=";
		cout << fixed << setprecision(2) << d[i].dis << endl;
	}
	return 0;
}

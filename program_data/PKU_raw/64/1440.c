//**********************
//* ??? ????    *
//* 1200012878 ???  *
//* 12?15?           *
//**********************
struct dian
{
	int a;
	int b;
	int c;
} p[10]; // ??????????
struct len
{
	int s;
	int m;
	double dis;
} q[45]; // ?????????????
int main()
{
	int n, count = -1, i, j, k, temp1, temp2;
	double temp3;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> p[i].a >> p[i].b >> p[i].c; // ???????
	for (j = 0; j < n - 1; j++)
	{
		for (k = j + 1; k < n; k++)
		{
			count++;
			q[count].dis = sqrt((p[j].a - p[k].a) * (p[j].a - p[k].a) + 
					(p[j].b - p[k].b) * (p[j].b - p[k].b) + 
					(p[j].c - p[k].c) * (p[j].c - p[k].c));
			q[count].s = j;
			q[count].m = k;
		}
	} // ??????????
	for(i = 0; i < count; i++)
	{
		for (j = count - 1; j >= i; j--)
		{
			if (q[j].dis < q[j + 1].dis)
			{
				temp1 = q[j].s;
				temp2 = q[j].m;
				temp3 = q[j].dis;
				q[j].s = q[j + 1].s;
				q[j].m = q[j + 1].m;
				q[j].dis = q[j + 1].dis;
				q[j + 1].s = temp1;
				q[j + 1].m = temp2;
				q[j + 1].dis = temp3;
			}
		}
	} // ??????????????????????????????????
	for (i = 0; i <= count; i++)
		cout << "(" << p[q[i].s].a << "," << p[q[i].s].b << "," << p[q[i].s].c << ")" << "-"
		<< "(" << p[q[i].m].a << "," << p[q[i].m].b << "," << p[q[i].m].c << ")" << "=" <<
		setprecision(2) << fixed << q[i].dis << endl; // ?????
	return 0;
}

struct location
{
	int x;
	int y;
	int z;
} point[10], t;
struct dis
{
	int point1;
	int point2;
	double s;
	int num;
} len[45], temp;
int main()
{
	int n, i, j,count = 0, p;
	double t;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> point[i].x >> point[i].y 
			>> point[i].z;
	}
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
		{
			len[count].point1 = i;
			len[count].point2 = j;
			t = pow ((double) (point[i].x - point[j].x), 2) +
				pow ((double) (point[i].y - point[j].y), 2) +
				pow ((double) (point[i].z - point[j].z), 2);
			len[count].s = sqrt (t);
			len[count].num = count;
			++count;
		}
	for (i = 0; i < count - 1; i++)
	{
		p = i;
		for (j = i +1; j < count; j++)
		{
			if (len[p].s < len[j].s)			
				p = j;
			else if (len[p].s == len[j].s 
				     && len[p].num > len[j].num)
				p = j;
		}
		{
			temp = len[p];
			len[p] = len[i];
			len[i] = temp;
		}
	}
	for (i = 0; i < count; i++)
	{
		cout << "(" << point[len[i].point1].x 
			 << "," << point[len[i].point1].y
			 << "," << point[len[i].point1].z
			 << ")" << "-"
			 << "(" << point[len[i].point2].x 
			 << "," << point[len[i].point2].y
			 << "," << point[len[i].point2].z
			 << ")" << "=" << fixed << setprecision(2)
			 << len[i].s << endl;
	}
	return 0;
}
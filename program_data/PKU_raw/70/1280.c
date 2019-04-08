int main()
{
	int n;
	cin >> n;
	struct v{double x; double y;} a[2005];
	double maxd = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].x >> a[i].y;
		for (int j = 0; j < i; j++)
		{
			double num = sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x) + (a[i].y-a[j].y)*(a[i].y-a[j].y));
			if (num > maxd) maxd = num;
		}
	}
	printf("%.4f\n", maxd);
}
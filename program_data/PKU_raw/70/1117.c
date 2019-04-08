


double distance(double x1, double y1, double x2, double y2)

{

	double m = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));

	return m;

}



int main()

{
	int i, n, j, k = 0;

	double a[100][2], dis, t;

	cin >> n;

	for (i = 0; i < n; i++)

	{

		cin >> a[i][0] >> a[i][1];

	}

	dis = distance(a[0][0], a[0][1], a[1][0], a[1][1]);

	while (k != n *(n - 1) / 2)

	{

		for (i = 0; i < n; i++)

		{
			for (j = i + 1; j < n; j++)

			{

				t = distance(a[i][0], a[i][1], a[j][0], a[j][1]);

				dis = (t > dis) ? t : dis;

				k++;



			}

		}

	}

	printf("%.4f\n", dis);

	return 0;

}
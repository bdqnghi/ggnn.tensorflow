
int main()
{
	int n, a[10], i, xue = 0;
	double gpa = 0, b[10];
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		xue = xue + a[i];
	}
	for(i = 0; i < n; i++)
	{
		scanf("%lf", &b[i]);
		if(b[i] >= 90 && b[i] <= 100)
			b[i] = 4.0;
		else if(b[i] >= 85)
			b[i] = 3.7;
		else if(b[i] >= 82)
			b[i] = 3.3;
		else if(b[i] >= 78)
			b[i] = 3.0;
		else if(b[i] >= 75)
			b[i] = 2.7;
		else if(b[i] >= 72)
			b[i] = 2.3;
		else if(b[i] >= 68)
			b[i] = 2.0;
		else if(b[i] >= 64)
			b[i] = 1.5;
		else if(b[i] >= 60)
			b[i] = 1.0;
		else 
			b[i] = 0;
		gpa = gpa + b[i] * a[i];
	}
	gpa = gpa / xue;
	printf("%.2lf\n", gpa);
	return 0;
}
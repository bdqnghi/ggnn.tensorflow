

double score2g(int m)	{
	if(m >= 90 && m <= 100)	{
		return 4.0;
	}
	else if(m >= 85 && m <= 89)	{
		return 3.7;
	}
	else if(m >= 82 && m <= 84)	{
		return 3.3;
	}
	else if(m >= 78 && m <= 81)	{
		return 3.0;
	}
	else if(m >= 75 && m <= 77)	{
		return 2.7;
	}
	else if(m >= 72 && m <= 74)	{
		return 2.3;
	}
	else if(m >= 68 && m <= 71)	{
		return 2.0;
	}
	else if(m >= 64 && m <= 67)	{
		return 1.5;
	}
	else if(m >= 60 && m <= 63)	{
		return 1.0;
	}
	else
		return 0;
}

int main()	{
	int i, n, a[15], b[15], sum2 = 0;
	double sum1 = 0;
	scanf("%d", &n);
	for(i = 0; i < n; ++i)	{
		scanf("%d", &a[i]);
		sum2 += a[i];
	}
	for(i = 0; i < n; ++i)	{
		scanf("%d", &b[i]);
		sum1 += (double)score2g(b[i])*a[i];
	}
	float rel = (double)sum1 / sum2;
	printf("%.2lf\n", rel);
	return 0;
}

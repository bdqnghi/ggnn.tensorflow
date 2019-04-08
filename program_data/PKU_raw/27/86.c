int main()
{
	int n;
	double a, b, c, delta;
	double real1, real2, i1, i2, x1, x2;
	int zero(double a);
	scanf("%d", &n);
	while (n > 0)
	{
		scanf("%lf %lf %lf", &a, &b, &c);
		delta = b * b - 4 * a * c;
		if (zero(delta) == 1)
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
//			if (!zero(x1)) x1 = 0; 
//			if (!zero(x2)) x2 = 0;
			printf("x1=%.5lf;x2=%.5lf\n", x1, x2);
		}
		else if (zero(delta) == 0)
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
//			if (!zero(x1)) x1 = 0;
			printf("x1=x2=%.5lf\n", x1);
		}
		else 
		{
			delta = -delta;
			real1 = -b / (2 * a);
			real2 = -b / (2 * a);
			i1 =  sqrt(delta) / (2 * a);
			i2 =  sqrt(delta) / (2 * a);
//			if (!zero(real1)) real1 = 0;
//			if (!zero(real2)) real2 = 0;
//			if (!zero(i1)) i1 = 0;
//			if (!zero(i2)) i2 = 0;
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", real1, i1, real2, i2);
		}
		n--;
	}
	return 0;
}
int zero(double a)
{
	if (fabs(a) > 1e-6) 
		if (a > 0) return 1;
		else return -1;
	else return 0;
}
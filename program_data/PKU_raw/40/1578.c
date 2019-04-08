double area (double, double, double, double, double);
int main ()
{
	double a, b, c, d, an, s;
	scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &an);
	s =area(a, b, c, d, an);
	if (s<0)
		printf ("Invalid input");
	else printf ("%.4f", s);
	return 0;
}

double area (double q, double w, double e, double r, double ty)
{
	double ang, ss, k, t;
	ang = (ty/2)/180*PI;
	t = (q+w+e+r)/2;
	ss = (t-q)*(t-w)*(t-e)*(t-r) - q*w*e*r*cos(ang)*cos(ang);
	/*printf ("%f ", q);*/
	if (ss<0)
		return -1;
	else 
	{
		k = sqrt(ss);
		return k;
	}
}

void main(){
	int n, j;
	double a, b, c, delta, o[100], p[100], q[100], realpart, imagpart, x1, x2;
	scanf("%d", &n);
	for (j=0; j<n; j++)
	{
	scanf("%lf %lf %lf", &o[j], &p[j], &q[j]);
	}
	for (j=0; j<n; j++)
	{
    a=o[j];
	b=p[j];
	c=q[j];
	delta=b*b-4*a*c;
    	if (delta > pow(10, -8))
		{
	    x1=(-b+sqrt(delta))/(2*a);
	    x2=(-b-sqrt(delta))/(2*a);
        printf("x1=%.5lf;x2=%.5lf\n", x1, x2);
		}
    	else if (fabs(delta) <= pow(10, -8))
		{
		x1=x2=-b/(2*a);
		printf("x1=x2=%.5lf\n", x1, x1);
		}
    	else
		{
		realpart=-b/(2*a);
		if (realpart==0)
			realpart=fabs(realpart);
		imagpart=sqrt(-delta)/(2*a);
        printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", realpart, imagpart, realpart, imagpart);
		}            
	}
}

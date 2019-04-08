int main()
{
	int i,j;
	double a,b,c,d,e,f,m,n,h;
	scanf ("%d\n",&j);
	for (i=1;i<=j;i++)
	{
		scanf ("%lf%lf%lf",&a,&b,&c);
	    h=b*b-4*a*c;
	    if (h>0)
		{
		d=(-b+sqrt(h))/(2*a);
	    e=(-b-sqrt(h))/(2*a);
		printf("x1=%.5lf;x2=%.5lf\n",d,e);}
		if (h==0)
		{
		f=(-b)/(2*a);
		printf ("x1=x2=%.5lf\n",f);}
		if (h<0)
		{
		m=(-b)/(2*a);	n=sqrt(-h)/(2*a);
	    printf ("x1=%.5lf+%.5lfi;",m,n);
        printf ("x2=%.5lf-%.5lfi\n",m,n);
		}}
		return 0;
}
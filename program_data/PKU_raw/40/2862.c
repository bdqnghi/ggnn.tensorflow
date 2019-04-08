int main()
{
	double a,b,c,d,S,alpha,m,n;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&alpha);
	double s(double a,double b,double c,double d),t(double a,double b,double c,double d),r(double a,double b,double c,double d,double alpha);
	m=t(a,b,c,d);
	n=r(a,b,c,d,alpha);
	if(m<0)
	{
		printf("Invalid input");
	}
	else
	{
		S=sqrt(m-n);
	    printf("%.4lf",S);
	}
	return 0;
}
double s(double a,double b,double c,double d)
{
	double w,z;
	w=(a+b+c+d);
	z=w/2;
	return(z);
}
double t(double a,double b,double c,double d)
{
	double x,h,i,j,k,l;
	x=s(a,b,c,d);
	h=x-a;
	i=x-b;
	j=x-c;
	k=x-d;
	l=h*i*j*k;
	return(l);
}
double r(double a,double b,double c,double d,double alpha)
{
	double p,q,y;
	p=alpha/720;
	q=p*2*PI;
    y=a*b*c*d*cos(q)*cos(q);
	return(y);
}

//#include <math.h>




int main()
{
	double n;
	scanf("%lf",&n);

	int a=0,b=0,c=0,d=0,e=0,f=0;

	a=(int)n/100;
	b=(int)(n-100*a)/50;
	c=(int)(n-100*a-50*b)/20;
	d=(int)(n-100*a-50*b-20*c)/10;
	e=(int)(n-100*a-50*b-20*c-10*d)/5;
	f=(int)(n-100*a-50*b-20*c-10*d-5*e);

	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);




	return 0;
}


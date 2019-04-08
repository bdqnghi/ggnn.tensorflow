
int main()
{
    double a,b,c,d,e,s;
	double S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	
    s = 0.5*(a+b+c+d); 
	S=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((e/2)/180.00*3.1415926)*cos((e/2)/180.00*3.1415926));
	if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((e/2)/180.00*3.1415926)*cos((e/2)/180.00*3.1415926)>0)
	    printf("%.4lf\n",S);
	else if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((e/2)/180.00*3.1415926)*cos((e/2)/180.00*3.1415926)<=0)
		printf("Invalid input\n");



	return 0;
}


int main()
{
	double a,b,c,d,S;
	double n,m;
	double square(double a,double b,double c,double d,double n);
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&m);
         n=cos((m*3.1415926)/360);
	S=square(a,b,c,d,n);
	if (S>=0)
	printf("%.4lf\n",S);
	else 	printf("Invalid input\n");  
	return 0;
}
double square (double a,double b,double c,double d,double n){
	double s,S;
	s=(a+b+c+d)/2;
	S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*n*n);
		return (S);
}


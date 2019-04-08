int main()
{
	double a,b,c,d,p,S,m;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&m);
	p=(a+b+c+d)/2;
	m=m*3.1415926/180;

     if ((p-a)*(p-b)*(p-c)*(p-d)-a*b*c*d*(cos(m))*(cos(m))<0)
        printf("Invalid input") ;
	 else 
	 {S=sqrt((p-a)*(p-b)*(p-c)*(p-d)-a*b*c*d*(cos(m/2))*(cos(m/2)));
	 printf("%.4lf",S);
	 }
	return 0;
}

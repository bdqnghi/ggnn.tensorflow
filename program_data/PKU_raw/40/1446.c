double PI=3.1415926;
double area(double a,double b,double c,double d,double e);
int main()
{
	double a,b,c,d,e,S,s;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
    s=(a+b+c+d)/2;
    if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/360*PI)*cos(e/360*PI)<0)
	{printf("Invalid input");
	}
	else
	{S=area(a,b,c,d,e);
    printf("%.4lf",S);
	}
    return 0;
}
double area(double a,double b,double c,double d,double e){
	double S,s;
    s=(a+b+c+d)/2;
    S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/360*PI)*cos(e/360*PI));
    return S;
}

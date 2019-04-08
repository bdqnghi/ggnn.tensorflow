int main()
{
	double a,b,c,d,e,s,S,t,f;
    #define PI 3.1415926
	e=f*PI/180;
	scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&f);
	s=(a+b+c+d)/2;
	e=f*PI/180;
	t=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e/2)*cos(e/2);
	if(t<0){
		printf("Invalid input");
	}
	else if(t>=0){
		S=sqrt(t);
		printf("%.4lf",S);
	}
	return 0;
}
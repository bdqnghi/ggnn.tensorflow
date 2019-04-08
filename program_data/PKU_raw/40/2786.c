double S(double a, double b, double c, double d, double hudu)
{
	double s=(a+b+c+d)/2;
	double S2=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(hudu)*cos(hudu);
	if(S2<0){
		return 1;
	}else{
		return sqrt(S2);
	}
}
int main()
{
	double a,b,c,d,e;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&e);
	double hudu=e/360*PI;
	if(S(a,b,c,d,hudu)==1){
		printf("Invalid input");
	}else{
		printf("%.4lf",S(a,b,c,d,hudu));
	}
	return 0;
}
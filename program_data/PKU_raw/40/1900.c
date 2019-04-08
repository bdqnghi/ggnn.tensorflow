void jisuan(double a,double b,double c,double d,double hudu)
{
	double s,h,mianji;
	s=(a+b+c+d)/2;
    h=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(hudu)*cos(hudu);
	if(h<0)
		printf("Invalid input");
	else
	{mianji=sqrt(h);
	printf("%.4lf",mianji);}}
void main()
{
    double a,b,c,d,jiaodu,s,hudu;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&jiaodu);
	hudu=jiaodu/2*3.1415926/180;
	jisuan(a,b,c,d,hudu);
}

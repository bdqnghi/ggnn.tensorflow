//?????????????????
int main()
{
         double mianji(double a,double b,double c,double d,double jiao);
	double a,b,c,d,jiao,shuchu;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&jiao);
	shuchu=mianji(a,b,c,d,jiao);
	if(shuchu==-1)                                 /*?????????????*/
		printf("Invalid input");
	else
		printf("%.4lf",shuchu);
	return 0;
}
//??????????????????
double mianji(double a,double b,double c,double d,double jiao)
{
	double result,hu,s,panduan;
	hu=jiao/180*PI/2;
	s=(a+b+c+d)/2;
	panduan=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(hu)*cos(hu);
	if(panduan<0)                                  /*????????????????*/
		result=-1;
	else
		result=sqrt(panduan);
	return result;
}
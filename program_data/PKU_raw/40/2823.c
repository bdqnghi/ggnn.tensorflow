double mianji(double a,double b,double c,double d,double jiaohe);
int main()
{
double a1,b1,c1,d1,s1,jiaohe1,jiao1,S;
scanf("%lf",&a1);
scanf("%lf",&b1);
scanf("%lf",&c1);
scanf("%lf",&d1);
scanf("%lf",&jiaohe1);
s1=(a1+b1+c1+d1)/2;
jiao1=jiaohe1/360*PI;
if((s1-a1)*(s1-b1)*(s1-c1)*(s1-d1)-a1*b1*c1*d1*cos(jiao1)*cos(jiao1)>=0){
	S=mianji(a1,b1,c1,d1,jiaohe1);
printf("%.4lf",S);
}else{
printf("Invalid input");
}
return 0;
}
double mianji(double a,double b,double c,double d,double jiaohe)
{
	double s,jiao,y;
	s=(a+b+c+d)/2; 
	jiao=jiaohe/360*PI;
	y=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(jiao)*cos(jiao);
	if(y>=0) return sqrt(y); 
}

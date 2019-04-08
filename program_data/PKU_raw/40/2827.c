double area(double x,double y,double z,double p,double q);
int main()
{
	double a,b,c,d,e,result;
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
	result=area(a,b,c,d,PI*e/360);
	if(result==0){
	printf("Invalid input");
	}else{
	printf("%.4lf",result);
	}
	return 0;
}
double area(double x,double y,double z,double p,double q){
double s;
s=(x+y+z+p)/2;
if((s-x)*(s-y)*(s-z)*(s-p)-x*y*z*p*cos(q)*cos(q)<0){
return 0;
}else{
return sqrt((s-x)*(s-y)*(s-z)*(s-p)-x*y*z*p*cos(q)*cos(q));
}
}
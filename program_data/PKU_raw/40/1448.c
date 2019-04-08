double PI=3.1415926;
double area(double a,double b,double c,double d,double e);
int main(){
	double x,a,b,c,d,e,s;
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
    s=(a+b+c+d)/2;
    if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e/2*PI/180)*cos(e/2*PI/180)>=0){
    x=area(a,b,c,d,e);
	printf("%.4lf",x);
	}else{
		printf("Invalid input");
	}
return 0;
}
double area(double a,double b,double c,double d,double e){
	double S;
	double s;
	double PI=3.1415926;
	s=(a+b+c+d)/2;
    S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e/2*PI/180)*cos(e/2*PI/180));
	return S;
}

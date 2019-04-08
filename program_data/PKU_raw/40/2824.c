double S(double a,double b,double c,double d,double degree){
	double angle=degree/360*3.1415926;
	double s=(a+b+c+d)/2;
	double area=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(angle),2));
	if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(angle),2)<0)
		return -1;
	else return area;
}
int main(){
	double a,b,c,d,degree,area;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&degree);
	area=S(a,b,c,d,degree);
	if(area==-1)
		printf("Invalid input");
	else
		printf("%.4lf",area);
	return 0;
}
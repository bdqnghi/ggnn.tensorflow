double area(double a,double b,double c,double d,double jiaodu){
	double s,delta,area,t;
	t=PI*jiaodu/360.0;
	s=(a+b+c+d)/2;
	delta=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(t)*cos(t);
	if(delta<0){
		return -1;
	}
	if(delta>=0){
		area=sqrt(delta);
		return area;
	}
}
int main()
{
	double a,b,c,d,jiaodu;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&jiaodu);
	if(area(a,b,c,d,jiaodu)==-1){
		printf("Invalid input\n");
	}else{
		printf("%.4lf\n",area(a,b,c,d,jiaodu));
	}
	return 0;
}
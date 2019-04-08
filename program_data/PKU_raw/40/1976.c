int main() 
{ 
	double a,b,c,d;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	double x;
	scanf("%lf",&x);
	double s;
	s = (a+b+c+d)/2;
	if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(x*PI/360)*cos(x*PI/360))>=0){
		printf("%.4lf\n",sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(x*PI/360)*cos(x*PI/360)));
	}
	else{
		printf("Invalid input\n");
	}
	return 0;
}
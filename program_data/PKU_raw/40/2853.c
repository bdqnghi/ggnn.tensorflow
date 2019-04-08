
double area(double a,double b,double c,double d,double angle){
	double s,k,S;
	s=(a+b+c+d)/2;
	k=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(angle)*cos(angle);
	if(k>=0){
		S=sqrt(k);
	}else{
		S=-1;
	}
	return S;
}
int main(int argc, char* argv[])
{
	double a,b,c,d,angle,s;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&angle);
	angle=angle/360*PI;
	s=area(a,b,c,d,angle);
	if(s==-1){
		printf("Invalid input\n");
	}else{
		printf("%.4lf\n",s);
	}
	return 0;
}

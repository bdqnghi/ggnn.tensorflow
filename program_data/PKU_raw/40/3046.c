
int main(){
	double A,B,C,D,E;
	double f(double a,double b,double c,double d,double e);
	scanf("%lf%lf%lf%lf%lf",&A,&B,&C,&D,&E);
	double SS;
	SS=f(A,B,C,D,E);
	if(SS!=0){
		printf("%.4lf",SS);
	}
	return 0;
}
double f(double a,double b,double c,double d,double e){
	double S,s;
	s=(a+b+c+d)/2;
	if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e*p/360)*cos(e*p/360)<0){
		printf("Invalid input");
		return 0;
	}
	else{
		S=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e*p/360)*cos(e*p/360));
		return S;
	}
}
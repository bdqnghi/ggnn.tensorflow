
int main()
{
	double a,b,c,d,al,o;
	double f(double A,double B,double C,double D,double AL);
	scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&al);
	o=f(a,b,c,d,al);
	if(o==-1){
		printf("Invalid input");
	}else{
		printf("%.4lf",o);
	}
	return 0;
}

double f(double A,double B,double C,double D,double AL)
{
	double s,S;
	s=(A+B+C+D)*0.5;
	if(A*B*C*D*cos(AL*Pi/360)*cos(AL*Pi/360)>(s-A)*(s-B)*(s-C)*(s-D)){
		S=-1;
	}else{
		S=sqrt((s-A)*(s-B)*(s-C)*(s-D)-A*B*C*D*cos(AL*Pi/360)*cos(AL*Pi/360)); 
	}
	return (S);
}

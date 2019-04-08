double area(double a,double b,double c,double d,double e);
int main(){
	double a,b,c,d,e,f,s,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	s=(a+b+c+d)/2;
	f=e/180*PI/2;
	if(((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f))*cos(f)<0){
		printf("Invalid input");}
	else{

	S=area(a,b,c,d,e);
	printf("%.4lf",S);
	}
	return 0;
	}
	double area(double a,double b,double c,double d,double e){
	    double f,s,S;
		s=(a+b+c+d)/2;
		f=e/180*PI/2;
		S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f)*cos(f));
		return S;
	}
   
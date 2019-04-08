int main(){
	double a,b,c,d,x,S,s;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&x);
	s=(a+b+c+d)/2;
	if((s-a)<0||(s-b)<0||(s-c)<0||(s-d)<0)
		printf("Invalid input");
	else{
		S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(x*PI/360)*cos(x*PI/360)); 
		printf("%.4lf",S);
	}
	return 0;
}
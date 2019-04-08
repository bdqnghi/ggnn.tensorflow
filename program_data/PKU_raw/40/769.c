int main(){
	double a,b,c,d,e,g;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	g=e/180*PI;
    double f,s,S;
	s=(double)1/2*(a+b+c+d);
	f=(double)(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(g/2)*cos(g/2);
	if(f>=0){S=(double)sqrt(f);
	printf("%.4lf",S);}
	else {printf("Invalid input");}
	return 0;
}
int main()
{
	double a;
	double b;
	double c;
	double d;
	double e,f,s,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	s=(a+b+c+d)/2;
	f=((a+b+c+d)/2-a)*((a+b+c+d)/2-b)*((a+b+c+d)/2-c)*((a+b+c+d)/2-d) - a*b*c*d*pow(cos(e*3.1415926/360),2);
	if(f>=0){
		S=sqrt(((a+b+c+d)/2-a)*((a+b+c+d)/2-b)*((a+b+c+d)/2-c)*((a+b+c+d)/2-d) - a*b*c*d*pow(cos(e*3.1415926/360),2));
		printf("%.4f\n",S);}
	else
		printf("Invalid input\n");
	return 0;
}

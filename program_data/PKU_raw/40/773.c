
double sqar(double f);

int main()
{
    double a,b,c,d,e,f,g,s,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	s=0.5*(a+b+c+d);
    g=e*PI/360;
	f=((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(g),2));
    if(f>=0){
     S=sqrt(f); 
	 printf("%0.4lf",S);
	}
	else {
		printf("Invalid input");
	}
	return 0;
}


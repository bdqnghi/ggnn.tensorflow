int main()
{
	double a,b,c,d,e,f,S,s;
	scanf("%lf\n",&a);
    scanf("%lf\n",&b);
	scanf("%lf\n",&c);
	scanf("%lf\n",&d);
    scanf("%lf\n",&e);
    s = (a+b+c+d)*0.5;
	f= (e/360)*3.1415926;
	S = ((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*(cos(f))*(cos(f)));
	if(S<0){
		printf("Invalid input");
	}
	else{
        printf("%.4lf",sqrt(S));
	}
		return 0;
}



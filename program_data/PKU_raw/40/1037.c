int main(int argc, char* argv[])
{
    double a,b,c,d,s,S;
	double x;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&x);
    s=(a+b+c+d)/2;
    S=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(x*3.1415926/2/180)*cos(x*3.1415926/2/180);
	if(S<0){
		printf("Invalid input\n");
	}
	else{
	printf("%.4lf\n",sqrt(S));
	}
	return 0;
}
int main()
{
	double a,b,c,d,i;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&i);
    double s,m;
    s=(a+b+c+d)/2;
	double h = a*b*c*d*cos(i*PI/360)*cos(i*PI/360);
    m=(s-a)*(s-b)*(s-c)*(s-d)-h;
		if(m<0)
		{
			printf("Invalid input");
		}
		double S;
		if(m>=0){
		S = sqrt(m); 
	printf("%.4lf",S);
		}
	return 0;
}

double getArea(double);
double getcos(double);
int main()
{
	double a,b,c,d,i,j;
    double S,s;
	scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&i);
	s=(a+b+c+d)/2;
	j=i*PI/360;
	S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(j)*cos(j));
	if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(i)*cos(j)>0)
	{
		printf("%.4lf\n",S);
	}
	else
	{
	    printf("Invalid input");
	}
	return 0;
}
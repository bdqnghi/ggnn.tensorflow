int main(int argc, char* argv[])
{
	double a,b,c,d,m,n;
	
	scanf("%lf\n%lf\n%lf\n%lf\n%lf\n",&a,&b,&c,&d,&n);
    double s=(a+c+d+b)/2;
	m=(n/360)*p;
	double S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(m)*cos(m));
         if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(m)*cos(m)>=0)
            {
	     printf("%.4f",S);
            }
         else
            {
            printf("Invalid input");
            }
	return 0;
}
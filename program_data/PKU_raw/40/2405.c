
int main()
{
	double a,b,c,d,s,e,S1;
	scanf("%lf",&a);
	scanf("%lf",&b);
    scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&e);
	s=(a+b+c+d)/2;
    S1=((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/360*PI)*cos(e/360*PI));
	if(S1>=0)
	     printf("%.4lf",sqrt(S1));
             else
              printf("Invalid input");
	
}


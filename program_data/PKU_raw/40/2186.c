int main()
{
	double a,b,c,d,e,s,S;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&e);
	e=e*PI/360;
	s=(a+b+c+d)/2;
	S=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e)*cos(e); 
	if(S<0)
		printf("Invalid input\n");
	else
	{S=sqrt(S);
	    printf("%.4lf\n",S);
	}
	return 0;
}

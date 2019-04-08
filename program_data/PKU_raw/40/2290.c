
void main()
{
	double a=0,b=0,c=0,d=0,s=0,S_1=0,S_2=0,alpha_2=0;

	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&alpha_2);
	s=(a+b+c+d)/2;
	S_2=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(alpha_2/360*PI)*cos(alpha_2/360*PI);

	if(S_2<0)
		{printf("Invalid input\n");}
	else
	{
		S_1=sqrt(S_2);
		printf("%.4f",S_1);
	}
}
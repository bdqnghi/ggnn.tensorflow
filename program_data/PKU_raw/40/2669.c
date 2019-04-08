
int main()
{
	double S,s,a,b,c,d,angle,angle2;
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&angle);

	s=(a+b+c+d)/2;
	angle2=((angle/(double)2)/((double)180))*pi;

	if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((angle/180)*pi))<0)
	{
		printf("Invalid input");
	}

	else 
	{
		S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(angle2)*cos(angle2));
		printf("%.4lf",S);
	}

    return 0;
}

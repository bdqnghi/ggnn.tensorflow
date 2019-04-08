int main()
{
	double a,b,c,d,apha,m=0,S=0,del=0;
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&apha);	
	apha=apha*PI/360;m=(a+b+c+d)*0.5;
	del=(m-a)*(m-b)*(m-c)*(m-d)-a*b*c*d*cos(apha);
	if (del>=0)
	{S=sqrt((m-a)*(m-b)*(m-c)*(m-d)-a*b*c*d*cos(apha)*cos(apha));printf("%.4lf",S);}
	else printf("Invalid input");
	return 0;
}
     

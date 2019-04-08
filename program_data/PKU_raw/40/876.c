
int main(int argc, char* argv[])
{   
	double a,b,c,d,sum;
	double s,S;
	scanf ("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&sum);
	s=(a+b+c+d)/2;
	S=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(sum*3.1415926/360)*cos(sum*3.1415926/360);
	if(S>0)
	{
		printf("%.4lf",sqrt(S));
	}
	else
	{
		printf("Invalid input");
	}
}
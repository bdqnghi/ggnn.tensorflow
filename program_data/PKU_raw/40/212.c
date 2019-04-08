int main()
{
		double a,b,c,d,e;
		scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
		double n=(a+b+c+d)/2;
		double p=cos((e*3.1415926)/360);
		double m=(n-a)*(n-b)*(n-c)*(n-d);
	if(m<0)
	{
		printf("Invalid input");
	}
	else
	{
      double S=sqrt(m-(a*b*c*d*p*p));
		printf("%.4lf",S);
	}
		return 0;
	}

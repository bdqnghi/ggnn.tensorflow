
int main()
{
    int n=0;
	int i=0;
	double a=0;
	double b=0;
	double c=0;
	double pan=0;
	double x1=0;
	double x2=0;
	double y=0;
	
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a>>b>>c;
		pan=b*b-4*a*c;
		if(pan>0)
		{
			x1=(-b + sqrt(pan))/(2*a);
			x2=(-b - sqrt(pan))/(2*a);
			printf("x1=%.5f",x1 );
			printf(";x2=%.5f\n", x2);
		}
		else if(pan==0)
		{
			x1=(-b)/(2*a);
			x2=x1;
			printf("x1=x2=%.5f\n",x1 );
		}
		else
		{
			x1=(-b)/(2*a);
			if(x1==0)
			{
				x1=-x1;
			}
			y=sqrt(-pan);
			
			printf("x1=%.5f",x1 );
			printf("+%.5f",y /(2*a));
			printf("i;");
			printf("x2=%.5f",x1 );
			printf("%.5f",-(y/(2*a)));
			printf("i\n" );
			
		}
	}
	
	return 0;
}
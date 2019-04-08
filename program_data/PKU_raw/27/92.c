void main()
{
	int n;
	double a,b,c,x1,x2,d,e;
	scanf("%d\n", &n);
	for(;n>=1;n--)
	{
		 scanf("%lf %lf %lf", &a,&b,&c);
		  if ((sqrt(b*b-4*a*c))>0) 
		  {
			  x1=(-b+sqrt(b*b-4*a*c))/(2*a);
			  x2=(-b-sqrt(b*b-4*a*c))/(2*a);
			  printf("x1=%.5f;x2=%.5f\n", x1,x2);
		  }
		else
		{
			if ((sqrt(b*b-4*a*c))==0) 
			{
				x1=-b/(2*a);
				printf("x1=x2=%.5f\n", x1);
			}
		    else
			{
			 d=-b/(2*a);
			 e=sqrt(-(b*b-4*a*c))/(2*a);
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", d,e,d,e);

			}
		}
	}
}
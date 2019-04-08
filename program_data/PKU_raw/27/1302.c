int main()
{
	int n, i;
	double a, b, c;
	double x1, x2, real,imaginary;
	scanf("%d", &n);
    double temp; 

	for( i=0; i<n; i++)
	{
		scanf("%lf%lf%lf", &a, &b, &c);
		temp = b*b - 4*a*c;
			if( temp >0 )
		{
			x1 = (-b+sqrt(temp))/(2*a);
			x2 = (-b-sqrt(temp))/(2*a);
          printf("x1=%.5f;x2=%.5f\n", x1, x2); 
		}	
		else if( temp == 0 )
		{
			x1 = -b/(2*a);
         printf("x1=x2=%.5f\n", x1);
		
		}
		else   
		{
			real =-b/(2*a);
			imaginary = sqrt(-temp)/(2*a);
            printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", real, imaginary, real, imaginary); 

		
		}
	}
}

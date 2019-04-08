
int main()
{
	int number;
	float a, b, c;
	double delta=0;
	scanf("%d",&number);
	while ( number -- )
	{
		scanf("%f %f %f", &a, &b, &c);
		delta = b*b-4*a*c;
		if ( delta > 0 )
		{
			double x1,x2;
			x1 = (-b + sqrt(delta))/(2*a); 
			x2 = (-b - sqrt(delta))/(2*a);
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		else
		{
			if ( delta == 0 )
			{
				double x = (-b)/(2*a);
				printf("x1=x2=%.5f\n", x);
			}
			else
			{
			delta = -delta;if(b==0){double xfront=b/(2*a);


				double xbehind = sqrt(delta)/(2*a);
				printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", xfront, xbehind, xfront, xbehind);}else{		double xfront = (-b)/(2*a);double xbehind = sqrt(delta)/(2*a);printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", xfront, xbehind, xfront, xbehind);}
			}
		}
	}
}


int main(int argc, char* argv[])
{
	int n, j;
	double x1, x2, s, t, a, b, c;
	scanf("%d", &n);
	for(j=1;j<=n;j++)
	{
		scanf("%lf%lf%lf", &a, &b, &c);
	    if(b*b-4*a*c>0)
		{
           x1 = (-b + sqrt(b*b-4*a*c))/(2*a); 
           x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
		   printf("x1=%.5lf;x2=%.5lf\n", x1, x2);
		}
		if(b*b-4*a*c==0)
		{
			x1=-b/(2*a);
			printf("x1=x2=%.5lf\n",x1);
		}
		if(b*b-4*a*c<0)
		{
			s=-b/(2*a);
			t=sqrt(4*a*c-b*b)/(2*a);
						    printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", s, t, s, t);
			
		}
	}


	return 0;
}


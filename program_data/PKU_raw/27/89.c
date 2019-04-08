void main()
{
	int n;
	scanf("%d",&n);
	while (n--)
	{
		double a,b,c,x1,x2,g,h;
		scanf("%lf %lf %lf",&a,&b,&c);
			if(b*b-4*a*c>0)
			{
			x1 = (-b + sqrt(b*b-4*a*c))/(2*a); 
			x2 = (-b - sqrt(b*b-4*a*c))/(2*a); 
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
			}
			else if(b*b-4*a*c==0)
			{
				x1 = (-b)/(2*a);  
			printf("x1=x2=%.5f\n",x1);
			}
			else if(b*b-4*a*c<0)
			{
				g=(-b)/(2*a);
				h=sqrt(4*a*c-b*b)/(2*a);
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",g,h,g,h);
			}
	}
}


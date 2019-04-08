void main()

{
	int n,i=1;
	float a,b,c;
	double x1,x2;
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%f %f %f",&a,&b,&c);
		if ((b*b-4*a*c)>0)
		{
			x1=(-b + sqrt(b*b-4*a*c))/(2*a) ;
			x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		if((b*b-4*a*c)==0)
		{
			x1=(-b + sqrt(b*b-4*a*c))/(2*a) ;
			x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
			printf("x1=x2=%.5f\n",x1);
		}
		if ((b*b-4*a*c)<0)
		{
			x1=-b/(2*a);
			x2=(sqrt(-b*b+4*a*c))/(2*a);
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,x2,x1,x2);
		}
		i++;
	}
}

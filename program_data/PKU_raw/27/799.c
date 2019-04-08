int main()
{
	int n,i;
	double a=0.0,b=0.0,c=0.0,x1,x2,y1,y2,p;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%lf %lf %lf",&a,&b,&c);
		p=b*b-4*a*c;
        if (p==0)
		{
			x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
		    x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
			printf("x1=x2=%.5f\n",x1);
		}
		if (p>0)
		{
			x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
		    x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		if (p<0)
		{
			y1=(-b)/(2*a);
		    y2 = sqrt(-p)/(2*a);
			if (y1==-0) y1=0;
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",y1,y2,y1,y2);
		}
	}




	return 0;
}
int main()
{
	float a,b,c,d,p,q;
	double x1,x2;
	int i,n,k;
	scanf("%d",&n);
	for (i=1;i<=n;++i)
	{
		scanf("%f%f%f",&a,&b,&c);
		d=sqrt(b*b-4*a*c);
		if(d>0)
		{
			x1 = (-b + d)/(2*a);
			x2 = (-b - d)/(2*a);
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		else if(d==0)
		{
			x1 = (-b + d)/(2*a);
			printf("x1=x2=%.5f\n",x1);
		}
		else
		{
			d=sqrt(4*a*c-b*b);
			if(b==0)
			{
				x1=b/(2*a);
				x2=b/(2*a);
				p=d/(2*a);
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,p,x2,p);
			}
			else
			{
				x1=(-b)/(2*a);
				x2=(-b)/(2*a);
				p=d/(2*a);
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,p,x2,p);
			}

		}
		

	}
	scanf("%d",&k);
		return(0);
}
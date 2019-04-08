int main()
{
	int n,j;
	float x[100],y[100],z[100];
         double x1,x2,p,q,a,b,c;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		scanf("%f%f%f",&x[j],&y[j],&z[j]);
	}
	for(j=1;j<=n;j++)
	{
		a=x[j];
		b=y[j];
		c=z[j];
		if(b*b>4*a*c)
		{
			x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
			x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		else if(b*b==4*a*c)
		{
			x1=-b/(2*a);
			printf("x1=x2=%.5f\n",x1);
		}
		else
		{
			p=-b/(2*a);
			q=sqrt(4*a*c-b*b);
			q=q/(2*a);
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",p,q,p,q);
		}
	}

}
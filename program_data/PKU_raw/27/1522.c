int main()
{
	int i,n;
	double a,b,c,x1,x2,disk,l[100],p[100],q[100],realpart,imagpart;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf %lf",&l[i],&p[i],&q[i]);
	}
	for(i=0;i<n;i++)
	{
		a=l[i];
		b=p[i];
		c=q[i];
		disk=b*b-4*a*c;
		if(disk>0)
		{
			x1 = (-b + sqrt(disk))/(2*a);
            x2 = (-b - sqrt(disk))/(2*a);
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		else if(disk==0)
		{
            x2 = (-b - sqrt(disk))/(2*a);
			printf("x1=x2=%.5f\n",x2,x2);
		}
		else
		{
			realpart= (-b)/(2*a);
            if(realpart==0) realpart=fabs(realpart);
            imagpart= fabs(sqrt(-disk)/(2*a));
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",realpart,imagpart,realpart,imagpart);
		}
	}
	return 0;
}
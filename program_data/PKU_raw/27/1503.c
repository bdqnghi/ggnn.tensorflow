int main()
{
	int i,n,r;
	double a,b,c,x[2000],x1[2000],x2[2000],delta[2000];
	i=1;
	scanf("%d",&n);
	while (i<=n)
	{
		scanf("%lf %lf %lf",&a,&b,&c);
		delta[i]=b*b-4*a*c;
        if (delta[i]>0)
		{
			x1[i]=(-b+sqrt(delta[i]))/(2*a);
			x2[i]=(-b-sqrt(delta[i]))/(2*a);	
		}
		else if (delta[i]==0)
		{
			x1[i]=x2[i]=(-b)/(2*a);		
		}
		else if (delta[i]<0)
		{
			x[i]=-b/(2*a);
			x1[i]=sqrt(-delta[i])/(2*a);
            x2[i]=sqrt(-delta[i])/(2*a);     
		}
		i=i+1;	
	}
	for(r=1;r<=n;r=r+1) 
	{
		if (delta[r]>0) printf("x1=%.5lf;x2=%.5lf\n",x1[r],x2[r]);
		else if (delta[r]==0) printf("x1=x2=%.5lf\n",x1[r]);
		else if (delta[r]<0)
		{
			if (x[r]==0) x[r]=-x[r];
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x[r],x1[r],x[r],x2[r]);
		}
	}
    return 0;
}
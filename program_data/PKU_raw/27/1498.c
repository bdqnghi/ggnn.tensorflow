void main()
{
int n,i=1;
double a[100],b[100],c[100],x1,x2,realpart,imagpart,disc;
scanf("%d",&n);

while (i<=n)
{
	scanf("%lf %lf %lf",&a[i],&b[i],&c[i]);
    i+=1;
}
i=1;
while (i<=n)
{
    disc=b[i]*b[i]-4*a[i]*c[i];
	if (disc>0) 
	{
		x1=(-b[i] + sqrt(disc))/(2*a[i]) , x2=(-b[i] - sqrt(disc))/(2*a[i]);
		if ( fabs(x1)<1e-5) x1=0;
    	if ( fabs(x2)<1e-5) x2=0;
		printf ("x1=%.5f;x2=%.5f\n",x1,x2);
	}
    else 	
	{
		if (disc==0)    
		{
				x1=(-b[i])/(2*a[i]);
				if(fabs(x1)<1e-5)   x1=0;
                printf ("x1=x2=%.5f\n",x1);
		}
		else 
		{
			realpart=(-b[i])/(2*a[i]);
		    imagpart=sqrt(-disc)/(2*a[i]);
			if ( fabs(realpart)<1e-5) realpart=0;
			if ( fabs(imagpart)<1e-5) imagpart=0;

			printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", realpart,imagpart, realpart,imagpart);
		}
	}
     i+=1;
}
}
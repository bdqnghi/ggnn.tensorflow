int main()
{
	int n,i;
	double delta,x1,x2,re,im1,im2;
    scanf("%d",&n); 
    float a[n],b[n],c[n];
    for(i=1;i<=n;i++)
		scanf("%f%f%f",&a[i],&b[i],&c[i]);
	for(i=1;i<=n;i++)
	{
		#define a a[i]
		#define b b[i]
		#define c c[i]
        delta=b*b-4*a*c;
        if (delta>0)
		{
			x1=(-b + sqrt(delta))/(2*a);
            x2=(-b - sqrt(delta))/(2*a);
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		if (delta==0)
		{	
			x1=-b/(2*a);
			printf("x1=x2=%.5f\n",x1);
		}
		if (delta<0)
		{
			re=-b/(2*a);
            if (re==-0)
				re=0;
			im1=sqrt(-delta)/(2*a);
			im2=-im1;
			if (im1>0)
			   printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",re,im1,re,im1);
		}
	}
	
	return 0;
}

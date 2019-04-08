

int main()
{

         const int max=100;
         double a[max],b[max],c[max],x1,x2,delta;
	int n,i;
	scanf("%d",&n);
	for (i=1;i<=n;i++) scanf("%lf %lf %lf",&a[i],&b[i],&c[i]);
	for (i=1;i<=n;i++)
	{
		delta=b[i]*b[i]-4*a[i]*c[i];
		if (delta>0)
		{
			x1=(-b[i]+sqrt(delta))/(2*a[i]);
			x2=(-b[i]-sqrt(delta))/(2*a[i]);
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		else if (delta==0) printf("x1=x2=%.5f\n",-b[i]/(2*a[i]));
		else
		{
			x1=-b[i]/(2*a[i]);
			x2=sqrt(-delta)/(2*a[i]);
			if (x2<0) x2=-x2;
                            if (x1==0) x1=0;
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,x2,x1,x2);
		}
	}
	return 0;
}

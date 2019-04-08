int main()
{
	int n,i;
	double a[30],b[30],c[30],x1,x2,m,q,p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<n;i++)
	{
		if((b[i]*b[i]-4*a[i]*c[i])>0)
		{
			x1 = (-b[i] + sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
			x2 = (-b[i] - sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
			printf("x1=%.5lf;",x1);
			printf("x2=%.5lf\n",x2);
		}
		else if((b[i]*b[i]-4*a[i]*c[i])==0)
		{
			x1=x2=(-b[i])/(2*a[i]);
			printf("x1=x2=%.5lf\n",x1);
		}
		else
		{
			m=sqrt(-b[i]*b[i]+4*a[i]*c[i])/(2*a[i]);
			q=-(sqrt(-b[i]*b[i]+4*a[i]*c[i])/(2*a[i]));
			p=(-b[i])/(2*a[i]);
			if(a>0)
			{
			printf("x1=%.5lf+%.5lfi;",p,m);
			printf("x2=%.5lf%.5lfi\n",p,q);
			}
			else
			{
			printf("x1=%.5lf%.5lfi;",p,m);
			printf("x2=%.5lf+%.5lfi\n",p,q);
			}
		}
	}
	return 0;
}
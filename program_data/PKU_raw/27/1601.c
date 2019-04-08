
int main()
{
	double a[100],b[100],c[100],x1[100],x2[100],s[100],x[100];
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);
			if(b[i]*b[i]-4*a[i]*c[i]>0)
			{
				x1[i]=(-b[i]+sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
				x2[i]=(-b[i]-sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
				printf("x1=%.5lf;",x1[i]);
				printf("x2=%.5lf\n",x2[i]);
			}
			else if(b[i]*b[i]-4*a[i]*c[i]==0)
			{
				x1[i]=x2[i]=-b[i]/(2*a[i]);
				printf("x1=x2=%.5lf\n",x1[i]);
			}
			else
			{s[i]= -b[i]/(2*a[i]);
				x[i]=sqrt(-b[i]*b[i]+4*a[i]*c[i])/(2*a[i]);
				printf("x1=%.5lf+%.5lfi;",s[i],x[i]);
				printf("x2=%.5lf-%.5lfi\n",s[i],x[i]);
			}
	}
	return 0;
}
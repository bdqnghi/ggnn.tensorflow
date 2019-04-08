int main()
{
	int n,i,k;
	double s,t,m;
	scanf("%d",&n);
	double a[100];
	for(i=0;i<3*n;i++)
		scanf("%lf",&a[i]);
	for(k=0;k<3*n;k++)
	{
		if(k%3==0)
		{
			m=a[k+1]*a[k+1]-4*a[k]*a[k+2];
			if(m>0)
			{
               s=(-a[k+1]+sqrt(m))/(2*a[k]);
			   t=(-a[k+1]-sqrt(m))/(2*a[k]);
			   printf("x1=%.5lf;x2=%.5lf\n",s,t);
			}
            if(m==0)
			{
				s=(-a[k+1])/(2*a[k]);
				printf("x1=x2=%.5lf\n",s);
			}
			if(m<0)
			{
				s=(-a[k+1])/(2*a[k]);
				t=(sqrt(-m))/(2*a[k]);
				if(s==0)
					printf("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n",t,t);
				else
				printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",s,t,s,t);
			}
		}
		else continue;
	}
	return 0;
}
			

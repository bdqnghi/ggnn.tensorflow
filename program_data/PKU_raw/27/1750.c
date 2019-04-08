int main()
{
	int n,i;
	double a,b,c,di;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
		di=b*b-a*c*4;
		if (di<0)
		{
			di=di*(-1);
			if(b/(2*a)<0.000001&&-0.000001<b/(2*a))
			{
				b=0;
				printf("x1=%.5lf+%.5lfi;x2=%.5lf%.5lfi\n",b/(2*a),sqrt(di)/(2*a),b/(2*a),(-1)*sqrt(di)/(2*a));
			}
			else
			printf("x1=%.5lf+%.5lfi;x2=%.5lf%.5lfi\n",(-1)*b/(2*a),sqrt(di)/(2*a),(-1)*b/(2*a),(-1)*sqrt(di)/(2*a));
			di=-1;
		}
		if(di==0)
		{
			//printf("%lf\n",(abs(b/(2*a))));
			if(b/(2*a)<0.000001&&-0.000001<b/(2*a))
			{
				b=0;
				printf("x1=x2=%.5lf\n",b/(2*a));
			}
			printf("x1=x2=%.5lf\n",(-1)*b/(2*a));
		}
		if(di>0)
		{
			if(b/(2*a)<0.000001&&-0.000001<b/(2*a))
			{
				b=0;
				printf("x1=%.5lf;x2=%.5lf\n",b/(2*a)+sqrt(di)/(2*a),b/(2*a)+(-1)*sqrt(di)/(2*a));
			}
			printf("x1=%.5lf;x2=%.5lf\n",(-1)*b/(2*a)+sqrt(di)/(2*a),(-1)*b/(2*a)+(-1)*sqrt(di)/(2*a));
		}
	}
}
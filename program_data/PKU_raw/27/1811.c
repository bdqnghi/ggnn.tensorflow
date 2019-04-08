int main()
{
	double m[2][99],x[99],a,b,c;
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf %lf",&a,&b,&c);
		x[i]=b*b-4*a*c;
		if(x[i]>0)
		{
			m[0][i]=(-b+sqrt(x[i]))/(2*a);
			m[1][i]=(-b-sqrt(x[i]))/(2*a);
		}
		else
		{
			if(x[i]==0)
			{
				m[0][i]=(-b)/(2*a);
			}
			else
			{
				m[0][i]=(-b)/(2*a);
				m[1][i]=sqrt(-x[i])/(2*a);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(x[i]>0)
		{
			printf("x1=%.5lf;x2=%.5lf\n",m[0][i],m[1][i]);
		}
		else
		{
			if(x[i]==0)
			{
				printf("x1=x2=%.5lf\n",m[0][i]);
			}
			else
			{
				if(m[0][i]==0)
				{
					printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",-m[0][i],m[1][i],-m[0][i],m[1][i]);
				}
				else
				printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",m[0][i],m[1][i],m[0][i],m[1][i]);
			}
		}
	}
	return 0;
}
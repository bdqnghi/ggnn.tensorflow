int main()
{
	int n,i,e;
	double a[50][3],x1,x2,s1,s2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(e=0;e<3;e++)
		{
			scanf("%lf",&a[i][e]);
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i][1]*a[i][1]-4*a[i][0]*a[i][2]>=0)
		{
			x1=(-a[i][1]+sqrt(a[i][1]*a[i][1]-4*a[i][0]*a[i][2]))/(2*a[i][0]);
			x2=(-a[i][1]-sqrt(a[i][1]*a[i][1]-4*a[i][0]*a[i][2]))/(2*a[i][0]);
			if(x1!=x2)
			{
				printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
			}
			else
			{
				printf("x1=x2=%.5lf\n",x1);
			}
		}
		else
		{
			s1=-a[i][1]/(2*a[i][0]);
			s2=sqrt(4*a[i][0]*a[i][2]-a[i][1]*a[i][1])/(2*a[i][0]);
			if(s1==0)
			{
				s1=-s1;
			}
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",s1,s2,s1,s2);
		}
	}
	return 0;
}
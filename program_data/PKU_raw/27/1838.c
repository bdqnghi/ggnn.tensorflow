
int main()
{
	float a[20],b[20],c[20];
	double x1,x2,p,q,m;
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f %f %f",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<n;i++)
	{
		double t;
		t=b[i]*b[i]-4*a[i]*c[i];
		if(t>0)
		{
			if(c[i]==0)
				x1=0;
			else
			x1=(-b[i]+sqrt(t))/(2*a[i]);
		    x2=(-b[i]-sqrt(t))/(2*a[i]);
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		else
			if(t==0)
			{
				if(b[i]==0)
					m=0;
				else
                    m=-(b[i]/(2*a[i]));
				printf("x1=x2=%.5f\n",m);
			}
			else
			{
				if(b[i]==0)
				{
					p=-0.000000;
				}
				else
				{
					p=-b[i]/(2*a[i]);
				}

			
				q=sqrt(-t)/(2*a[i]);
				printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",p,q,p,q);
			}
	}
	return 0;
}


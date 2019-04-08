int main()
{
	int n,i,j;
	double a[100][3],x1,x2,y;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%lf",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i][1]*a[i][1]-4*a[i][0]*a[i][2]>0)
		{
			x1=(-a[i][1]+sqrt(a[i][1]*a[i][1]-4*a[i][0]*a[i][2]))/(2*a[i][0]);
			x2=(-a[i][1]-sqrt(a[i][1]*a[i][1]-4*a[i][0]*a[i][2]))/(2*a[i][0]);
			printf("x1=%.5lf;",x1);
			printf("x2=%.5lf\n",x2);
		}
		if(a[i][1]*a[i][1]-4*a[i][0]*a[i][2]==0)
		{
			x1=(-a[i][1])/(2*a[i][0]);
			printf("x1=x2=%.5lf\n",x1);
		}
		if(a[i][1]*a[i][1]-4*a[i][0]*a[i][2]<0)
		{
			if(a[i][1]==0)
			{
				y=(sqrt(-a[i][1]*a[i][1]+4*a[i][0]*a[i][2]))/(2*a[i][0]);
				printf("x1=0.00000+%.5lfi;",y);
				printf("x2=0.00000-%.5lfi\n",y);
			}
			else if(a[i][1]!=0)
			{
			    x1=(-a[i][1])/(2*a[i][0]);
			    y=(sqrt(-a[i][1]*a[i][1]+4*a[i][0]*a[i][2]))/(2*a[i][0]);
			    printf("x1=%.5lf+%.5lfi;",x1,y);
			    printf("x2=%.5lf-%.5lfi\n",x1,y);
			}
		}
	}
	return 0;
}
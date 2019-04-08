int main()
{
	int n,i,j;
	double a[100][3],t;
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
		t=-a[i][1]/(2*a[i][0]);
		if(a[i][1]==0.0) t=0;
		if(a[i][1]*a[i][1]-4*a[i][0]*a[i][2]==0)
			printf("x1=x2=%.5lf\n",t);
        else if(a[i][1]*a[i][1]-4*a[i][0]*a[i][2]>0)
			printf("x1=%.5lf;x2=%.5lf\n",(-a[i][1]+sqrt(a[i][1]*a[i][1]-4*a[i][0]*a[i][2]))/(2*a[i][0]),(-a[i][1]-sqrt(a[i][1]*a[i][1]-4*a[i][0]*a[i][2]))/(2*a[i][0]));
		else if(a[i][1]*a[i][1]-4*a[i][0]*a[i][2]<0)
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",t,sqrt(4*a[i][0]*a[i][2]-a[i][1]*a[i][1])/(2*a[i][0]),t,sqrt(4*a[i][0]*a[i][2]-a[i][1]*a[i][1])/(2*a[i][0]));
	}
	return 0;
}

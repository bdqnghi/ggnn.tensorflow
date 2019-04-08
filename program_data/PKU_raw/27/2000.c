int main()
{
	int n,i;
	double a,b,c,x[100][5],dt;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf %lf",&a,&b,&c);
		dt=b*b-4*a*c;
		if(dt>0.0)
		{
			x[i][0]=1;
			x[i][1]=(-b + sqrt(dt))/(2*a);
			x[i][2]=(-b - sqrt(dt))/(2*a);
		}
		else if(dt==0)
		{
			x[i][0]=2;
			x[i][1]=(-b)/(2*a);
		}
		else
		{
			x[i][0]=3;
			x[i][1]=(-b)/(2*a);
			x[i][3]=(sqrt(-dt))/(2*a);
            x[i][2]=(-b)/(2*a);
			x[i][4]=(sqrt(-dt))/(2*a);
		}
	}
	for(i=0;i<n;i++)
	{
		if(x[i][0]==1)
		{
			printf("x1=%.5f;x2=%.5f\n",x[i][1],x[i][2]);
		}
		else if(x[i][0]==2)
		{
			printf("x1=x2=%.5f\n",x[i][1]);
		}
		else if(x[i][0]==3)
		{
			if(x[i][1]==-0.0)
			x[i][1]=0.0;
			if(x[i][2]==-0.0)
			x[i][2]=0.0;
			printf("x1=%.5f+%.5f",x[i][1],x[i][3],x[i][2],x[i][4]);
			printf("i;x2=%.5f-%.5f",x[i][2],x[i][4]);
			printf("i\n");
		}
	}
	return 0;
}
int main()
{
	int i,n;
	double a,b,c,x1,x2;
	cin>>n;
	for(i=1;i<=n;i=i+1)
	{
		cin>>a>>b>>c;
		if((b*b-4*a*c)>0)
		{
		x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
		x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
		printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		else if((b*b-4*a*c)==0)
		{
			x1 = x2 = (-b )/(2*a);
			printf("x1=x2=%.5f\n",x1);
		}
		else
		{
			x1 = (-b)/(2*a);
			if (abs(x1)<0.00001) x1=0;
			x2 = (sqrt(4*a*c-b*b))/(2*a);
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,x2,x1,x2);
		}
		
		
	}
}
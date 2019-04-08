int main ()
{
	double a,b,c,t;
	double x1,x2;
	int n,i;

	cin>>n;
	for(i=1;i<n+1;i++)
	{
		cin>>a>>b>>c;
		t=-b/(2*a);
		if(fabs(b*b-4*a*c)<1e-9)
			printf("x1=x2=%.5f\n",-b/(2*a));
			else if((b*b-4*a*c)>0)
		{
			x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
			
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		else
{
            if(fabs(t)<1e-9)
				t=0;
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", t, sqrt(-(b*b-4*a*c))/(2*a),t,sqrt(-(b*b-4*a*c))/(2*a));}
	}
	return 0;
}
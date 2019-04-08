int main()
{
	double a,b,c,delta,m,n;
	int i = 0;
	scanf("%d",&i);
	while(i--)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
		delta=b*b-4*a*c;
		
		if(delta<0)
		{
			m=-b/2/a;
			n=sqrt(-delta)/2/a;
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",m,n,m,n);
		}
		else 
			if(delta==0)
			{
				m=-b/2/a;
				printf("x1=x2=%.5lf\n",m);
			}
			else 
			{
				m=-b/2/a;
				n=sqrt(delta)/2/a;
				printf("x1=%.5lf;x2=%.5lf\n",m+n,m-n);
			}
	}
	return 0;
}



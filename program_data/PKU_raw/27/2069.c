int main()
{
	int n,i;
    double a,b,c,d,e;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
		d=b*b-4*a*c;
		e=(-b/(2*a));
			if(d>0)
			{
				printf("x1=%.5lf;x2=%.5lf\n",e+sqrt(d)/(2*a),e-sqrt(d)/(2*a));
			}
			else if(d==0)
			{
				printf("x1=x2=%.5lf\n",e);
			}
			else
			{
				printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",e,sqrt(-d)/(2*a),e,sqrt(-d)/(2*a));
			}
    
	}

	return 0;
}



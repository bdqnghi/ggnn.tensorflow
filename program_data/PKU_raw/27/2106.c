int main() 
{
	double a,b,c,d,e,f,k,l;
	int g,h;
	scanf("%d",&g);
	for(h=0;h<g;h++)
	{
	scanf("%lf %lf %lf",&a,&b,&c);
	d=b*b-4*a*c;
	if(b==0)
	b=-b;
	if(d>0)
	{
		e=(-b+sqrt(b*b-4*a*c))/(2*a);
		f=(-b-sqrt(b*b-4*a*c))/(2*a);
		if(e<f)
		{
			l=e;
			e=f;
			f=l;
		}
		printf("x1=%.5lf;x2=%.5lf\n",e,f);
	}
	else if(d==0)
	{
		e=-b/(2*a);
		printf("x1=x2=%.5lf\n",e);
	}
	else
	{
		e=(-b)/(2*a);
		f=(-b)/(2*a);
		k=sqrt(-d)/(2*a);
		printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",e,k,f,k);
	}
	}
	return 0;
}

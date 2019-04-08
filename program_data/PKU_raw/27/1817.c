
int main(int argc, char* argv[])
{
	int n,i;
	double a,b,c,x1,x2,m,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
		if((b*b-4*a*c)>=0)
		{
			x1=(-b + sqrt(b*b-4*a*c))/(2*a);
			x2=(-b - sqrt(b*b-4*a*c))/(2*a);
			if(x1==x2)
				printf("x1=x2=%.5lf\n",x1);
			else
				printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		else
		{
			m=sqrt(-b*b+4*a*c)/2.0/a;
			x=-b/2.0/a;
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x,m,x,m);		
		}
	}
	return 0;
}

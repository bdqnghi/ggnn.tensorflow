int main()
{
	int m=0,n;
	double a,b,c,d,x1,x2,x1i,x2i;
	scanf("%d",&n);
	do{
		scanf("%lf%lf%lf",&a,&b,&c);
		if(b*b-4*a*c>0)
			{
				x1=(-b + sqrt(b*b-4*a*c))/(2*a);
				x2=(-b - sqrt(b*b-4*a*c))/(2*a);
				printf("x1=%.5lf;",x1);
				printf("x2=%.5lf\n",x2);
			}
		else if(b*b-4*a*c==0)
			{
				x1=-b/(2*a);
				printf("x1=x2=%.5lf\n",x1);
			}
		else
			{
				x1=-b/(2*a);
				x1i=sqrt(4*a*c-b*b)/(2*a);
				x2=-b/(2*a);
				x2i=-sqrt(4*a*c-b*b)/(2*a);
				if(b/(2*a)==0)
					{
						x1=0;
						x2=0;
					}
				printf("x1=%.5lf+%.5lfi;",x1,x1i);
				printf("x2=%.5lf%.5lfi\n",x2,x2i);
			}
		m++;
	}while(m<n);
		return 0;
}
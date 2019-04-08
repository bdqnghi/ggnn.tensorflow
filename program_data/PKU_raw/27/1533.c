 
int main()
{
	int n;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        double a,b,c,x1,x2;
		double t;
		scanf("%lf %lf %lf",&a,&b,&c);
		if(b*b-4*a*c>0)
		{
			x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
            x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		else if(b*b-4*a*c==0)
		{
            x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
			printf("x1=x2=%.5lf\n",x1);
		}
		else
		{
			char s;
			s=i;
            x1 = sqrt(4*a*c-b*b)/(2*a);
            x2 = sqrt(4*a*c-b*b)/(2*a);
			t  = -b/(2*a);
			if(t!=0)
                printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",t,x1,t,x2);
			else
            {
				t=0;
            	printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",t,x1,t,x2);
			}
		}
	}
        return 0;
}

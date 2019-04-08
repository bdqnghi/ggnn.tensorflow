int main()
{
	int n,i,k;
    double a,b,c,A,B;
	double x1,x2,x;
	scanf("%d",&n);
	for (k=0;k<n;k++)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
		if ((b*b-4*a*c)>0)
		{
			x1 = (-b + sqrt(b*b-4*a*c))/(2*a); 
            x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
		printf("x1=%.5lf;x2=%.5lf\n",x1,x2);	
		}				
	    if ((b*b-4*a*c)==0)
		{
            x=-b/(2*a);
			printf("x1=x2=%.5lf\n",x);			
		 }		
		if ((b*b-4*a*c)<0)
		{
			if(b==0)
			{	A=0.00000;
                B =sqrt(4*a*c-(b*b))/(2*a);
                printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",A,B,A,B);
			}
				else
				{
		        A =-b/(2*a);
			    B =sqrt(4*a*c-(b*b))/(2*a);
			      printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",A,B,A,B);
				}
		}
	}
	return 0;
}



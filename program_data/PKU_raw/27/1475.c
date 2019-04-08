
int main()
{
	int n,i;
	double a,b,c,x1,x2,G,y;
	scanf("%d\n",&n);
	for (i=0;i<n;i++)
	{
		scanf("%lf%lf%lf\n",&a,&b,&c);
        G=b*b-4*a*c;
		if (G>0)
		{
			x1=(-b+sqrt(b*b-4*a*c))/(2*a);
			if(x1==0){
				x1=0-x1;
			}
		    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
			if(x2==0){
				x2=0-x2;
			}
			if  (x1==x2) printf("x1=x2=%.5lf\n",x1,x2);
			else printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}   
		else
		{ 
		    
		    x1=(-b)/(2*a);
			if(x1==0){
				x1=0-x1;
			}
			y=(-sqrt(-b*b+4*a*c))/(2*a);
		    
			if  (y==0) printf("x1=x2=%.5lf\n",x1,x1);
			else

				printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1,-y,x1,-y);
		}
			
    }
	return 0;
}




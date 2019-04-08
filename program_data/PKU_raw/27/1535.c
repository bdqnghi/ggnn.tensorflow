int main()
{
int n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	 double a,b,c;
	 scanf("%lf%lf%lf",&a,&b,&c);
	 if(b*b>4*a*c)
		 printf("x1=%.5lf;x2=%.5lf\n",(-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
	 else if(b*b==4*a*c)
		 printf("x1=x2=%.5lf\n",(-b+sqrt(b*b-4*a*c))/(2*a));
	 else
	 {
		 if(b==0)
            printf("x1=0.00000+%.5lfi;x2=0.00000%.5lfi\n",sqrt(-b*b+4*a*c)/(2*a),-sqrt(-b*b+4*a*c)/(2*a));
		else
		 printf("x1=%.5lf+%.5lfi;x2=%.5lf%.5lfi\n",-b/(2*a),sqrt(-b*b+4*a*c)/(2*a),-b/(2*a),-sqrt(-b*b+4*a*c)/(2*a));
	 }
}
return 0;
}

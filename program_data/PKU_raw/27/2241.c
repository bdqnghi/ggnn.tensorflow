int main()
{
	#define i
	int n,k;
	float a,b,c;
    scanf("%d",&n);
	

	for (k=0;k<n;k++)
	{	
		scanf("%f%f%f",&a,&b,&c);
	if (b!=0)
	{
		if (b*b==4*a*c)
			printf("x1=x2=%.5lf\n",-b/2/a);
	    else if (b*b-4*a*c>0)
			printf("x1=%.5lf;x2=%.5lf\n",(-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
      	else
            printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",-b/2/a,sqrt(4*a*c-b*b)/(2*a),-b/2/a,sqrt(4*a*c-b*b)/(2*a));
	}
	else
	{
		if (a*c<0)
		  printf("x1=0.00000+%.5lf;x2=0.00000+%.5lf\n",(sqrt(b*b-4*a*c))/(2*a),(-sqrt(b*b-4*a*c))/(2*a));  
	    if (a*c>0)
          printf("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n",sqrt(4*a*c-b*b)/2/a,sqrt(4*a*c)/2/a);
	}
	}
  return 0;
}
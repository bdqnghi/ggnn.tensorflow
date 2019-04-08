int main()
{
	int n,i;
	scanf("%d",&n);
	double a,b,c;
	double x1,x2;
	for(i=1;i<=n;i++)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
      if(b*b-4*a*c>0.0)
	  {
		  x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
          x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
		  printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
	  }
	  
	  else if(b*b-4*a*c<0.0)
	  {
		  if(b!=0)
		  {
		  x1=-b/(2*a);
		  x2=sqrt(4*a*c-b*b)/(2*a);
	
		  if(sqrt(4*a*c-b*b)/(2*a)>0)
		  {
          printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1,x2,x1,x2);
		  }
          if(sqrt(4*a*c-b*b)/(2*a)<0)
		  {
          printf("x1=%.5lf%.5lfi;x2=%.5lf+%.5lfi\n",x1,x2,x1,-x2);
		  }
		  }
          else if(b==0)
		  {
		  x1=-b/(2*a);
		  x2=sqrt(4*a*c-b*b)/(2*a);
		
		  if(sqrt(4*a*c-b*b)/(2*a)>0)
		  {
          printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",-x1,x2,-x1,x2);
		  }
          if(sqrt(4*a*c-b*b)/(2*a)<0)
		  {
          printf("x1=%.5lf%.5lfi;x2=%.5lf+%.5lfi\n",-x1,x2,-x1,-x2);
		  }
		  }
	  }
       else 
	  {
		  x1=x2=-b/(2*a);
		  printf("x1=x2=%.5lf\n",x1);
	  }
	}
	return 0;
}
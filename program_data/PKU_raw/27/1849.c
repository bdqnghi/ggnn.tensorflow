int main(void)
{
  double a=1.0,b=1.0,c=1.0;
  int n=1,k=1;
  scanf("%d",&n);
  double e[100],f[100],g[100];
  for(k=0;k<n;k++)
  {
    scanf("%lf %lf %lf",&e[k],&f[k],&g[k]);
  }

	 
  for(k=0;k<n;k++)
	  {
		  a=e[k];b=f[k];c=g[k];
		  if(b*b-4*a*c==0)
			  printf("x1=x2=%.5lf\n",-b/(2*a));
		  else if(b*b-4*a*c>0)
		   			  printf("x1=%.5lf;x2=%.5lf\n",(-b + sqrt(b*b-4*a*c))/(2*a),(-b - sqrt(b*b-4*a*c))/(2*a));
		  else if(b*b-4*a*c<0)
		  {  if(b==0) 
		        printf("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n",sqrt(-(b*b-4*a*c))/(2*a),sqrt(-(b*b-4*a*c))/(2*a));
		     else
		        printf("x1=%.5lf+%.5lfi;x2=%.5lf%.5lfi\n",-b/(2*a),sqrt(-(b*b-4*a*c))/(2*a),-b/(2*a),-sqrt(-(b*b-4*a*c))/(2*a));
		  }  
   	  
  }
 
  return 0;

}

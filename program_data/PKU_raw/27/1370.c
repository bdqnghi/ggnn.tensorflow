int main(int argc, char* argv[]) 
{   
	 
	int n,r=1;
    float a,b,c,a1,a2;
    double x1,x2,w;
	scanf("%d",&n);
	while (r<=n)
	{
		scanf("%f%f%f",&a,&b,&c);
		r++;
        x1 = (-b + sqrt(b*b-4*a*c))/(2*a); 
        x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
	   if (b*b-4*a*c>0)
		   printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
	   else 
	   {
		   if (b*b-4*a*c==0)
		    printf("x1=x2=%.5lf\n",x1);
		   else 
		   {
		      a1 = (-b)/(2*a); 
              a2 = (-b)/(2*a);
			  w = sqrt(-(b*b-4*a*c))/(2*a);
			  if (b!=0)
		       printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",a1,w,a2,w);
			  else
               printf ("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n",w,w);
		   }
	   
	   }
	}
       
	return 0;
}

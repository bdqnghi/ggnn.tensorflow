int main()
{
   int n,m,i,j;
   double s,a,b,c,d,e,x[100]; 
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
	   s=0;
       a=0;
       d=0;
	scanf("%d",&m);
       for(j=0;j<m;j++)
	   {
		   scanf("%lf",&x[j]);
	       a=a+x[j];
	   }
	   b=(a/m);
       for(j=0;j<m;j++)
	   {
		   c=pow((x[j]-b),2);
		   d=d+c;
		
	   }
	   e=d/m;
	   s=sqrt(e);
	   printf("%.5lf\n", s);
   }
   return 0;
   }

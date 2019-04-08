int main()
{
double a,b,c;
double x1,x2,delta;
double root;
int n,i;

scanf("%d",&n);
for(i=1;i<=n;i++)
{
   scanf("%lf %lf %lf",&a,&b,&c);
   delta=b*b-4*a*c;
   if(delta<0)
   {
		delta=-delta;
		root=(-b)/(2*a);
		if(root==0) root=-root;
		printf("x1=%.5f",root);
		printf("+");
		printf("%.5f",sqrt(delta)/(2*a));
		printf("i");
		printf(";");
		printf("x2=%.5f",root);
		printf("-");
		printf("%.5f",sqrt(delta)/(2*a));
		printf("i");
		printf("\n");
   }
   else
   {
      x1=(-b+sqrt(delta))/(2*a);
	  x2=(-b-sqrt(delta))/(2*a);
	  if(x1==x2)
	  {
	    printf("x1=x2=%.5f",x1);
		printf("\n");
	  }
	  else
	  {
	    printf("x1=%.5f",x1);
		printf(";");
		printf("x2=%.5f",x2);
		printf("\n");
	  }
   
   }


}


return 0;
}
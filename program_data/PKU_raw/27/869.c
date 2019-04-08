int main ()
{
 double a,b,c,d,e,q,x1,x2;
 int n,i=0;
 scanf("%d",&n);
 while(i<n)
 {scanf("%lf%lf%lf",&a,&b,&c);
  d=b*b-4*a*c;
  if(d>0)
   {x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("x1=%.5f;x2=%.5f\n",x1,x2);}
  if(d==0)
   {x1=-b/(2*a);
    printf("x1=x2=%.5f\n",x1);}
  if(d<0)
   {e=(sqrt(-d))/(2*a);
    if(b!=0)
     {q=(-b)/(2*a);
      printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",q,e,q,e);}
	else
	  printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",b,e,b,e);}
  i=i+1;	      
 }
 return 0;	
}
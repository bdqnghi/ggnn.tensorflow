int n,m,i,j;
double x[100],eq,s;
void main()
{
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {eq=0.0,s=0.0;
   scanf("%d",&m);
   for(j=0;j<m;j++)
   {scanf("%lf",x+j);
   eq=eq+*(x+j);
   }
   eq=(eq/m)*1.0;
   for(j=0;j<m;j++)
   {s=s+(*(x+j)-eq)*(*(x+j)-eq);}
   s=sqrt((s/m)*1.0);
   printf("%.5f\n", s);
  }
}
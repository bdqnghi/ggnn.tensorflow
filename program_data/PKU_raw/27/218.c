main()
{
 int n,j;
 double a,b,c;
 double p,q,r,u,v,t;
 double x1,x2;
 char i;
 scanf("%d",&n);
 double m[100][3];
 for(j=0;j<n;j++)
 {
  scanf("%lf%lf%lf\n",&a,&b,&c);                
  m[j][0]=a;
  m[j][1]=b;
  m[j][2]=c;                
  }
    for(j=0;j<n;j++)
{
p=m[j][0];
q=m[j][1];
r=m[j][2];
t=q*q-4*p*r;
if(t>0)
 { 
  double p1;
  p1=2*p; 
  x1=(-q+sqrt(t))/p1;
  x2=(-q-sqrt(t))/p1;   
  printf("x1=%.5lf;x2=%.5lf\n",x1,x2);     
       } 
  else
  {
   if(t==0)
   {
   x1=-q/(2*p);
   x2=-q/(2*p);
   printf("x1=x2=%.5lf\n",x1);
   }
   else
   {
   u=sqrt(-t)/(2*p);
   v=(-q)/(2*p);
  if(v!=0)
   printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",v,u,v,u);
  else
   printf("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n",u,u); 
   }
   }     
      }
   getchar();
   getchar();   
   getchar();
   getchar();           
}

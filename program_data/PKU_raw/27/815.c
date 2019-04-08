int main()
{
 int n,m;
 double a,b,c,x,y,p,q,disc;
 scanf("%d",&n);
 for(m=1;m<=n;m++)
 {
  scanf("%lf %lf %lf",&a,&b,&c);
  disc=b*b-4*a*c;
  p=-b;
  p=p/2;
  p=p/a;
  if (disc>0) 
  {
   q=sqrt(disc);
   q=q/2.0;
   q=q/a;
   x=p+q;y=p-q;
   printf("x1=%.5f;x2=%.5f",x,y);
   printf("\n");
  }
  else if (disc==0)
  {
   printf("x1=x2=%.5f",p);
   printf("\n");
  }
  else
  {
   disc=-disc;
   q=sqrt(disc);
   q=q/2.0;
   q=q/a;
   if(p==-0) p=0;
   printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",p,q,p,q);
   printf("\n");
  }
 }
 return 0;
}
 
 
 

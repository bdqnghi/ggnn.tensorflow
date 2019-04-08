int main()
{
 int a,b,c,d,e,f,g,h,i,m,n;
 for(a=1;a<=5;a++)
  {
   for(b=1;b<=5;b++)
   {
    for(c=1;c<=5;c++)
    {
     for(d=1;d<=5;d++)
      {
       if((a+b==c+d)&&(a+d)>(b+c)&&(a+c)<b)
       { e=10*a; 
       f=10*b; 
       g=10*c; 
       h=10*d;}
      } 
     }
    }
   }
 if (e<f) 
  {
   i=e;
   e=f;
   f=i;
  }
 if (e<g)
  {
   i=e;
   e=g;
   g=i;
  }
 if (e<h)
  {
   i=e;
   e=h;
   h=i;
  }
 printf("l %d\n",e);
 if (f<g)
  {
   m=f;
   f=g;
   g=m;
  }
 if (f<h)
  {
   m=f;
   f=h;
   h=m;
  }
 printf("q %d\n",f);
 if (g<h)
  {
   n=g;
   g=h;
   h=n;
  }
 printf("z %d\n",g);
 printf("s %d\n",h);
 return 0;
}
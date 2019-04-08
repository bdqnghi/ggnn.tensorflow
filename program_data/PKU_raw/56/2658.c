void main()
{ int a,b,c,d,e,g;
  scanf("\n%d",&g);
  e=g/10000;
  d=g/1000-10*e;
  c=g/100-10*(g/1000);
  b=g/10-10*(g/100);
  a=g-10*(g/10);
  if(g>=10000) printf("%d%d%d%d%d",a,b,c,d,e);
  else if(g<10000&&g>=1000) printf("%d%d%d%d",a,b,c,d);
  else if(g<1000&&g>=100) printf("%d%d%d",a,b,c);
  else if(g<100&&g>=10) printf("%d%d",a,b);
  else printf("%d",a);
 
}

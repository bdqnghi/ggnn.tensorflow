int main()
{
 unsigned int a,b=0,c;char d;

 for(scanf("%d",&a);(d=getchar())!='\n';)
 {
  if(a>b)
  {
   c=b;
   b=a;
  }
  else if(a==b)
   ;
  else if(a>=c)
   c=a;
  scanf("%d",&a);
 }
  if(a>b)
  {
   c=b;
   b=a;
  }
  else if(a==b)
   ;
  else if(a>=c)
   c=a;
 if(c==0)
  printf("No");
 else printf("%d",c);
 return 0;
}

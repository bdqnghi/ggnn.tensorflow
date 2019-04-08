int main()
{
  int a,j,b,c,i,n;
  char x[10000];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
   { scanf("%s",x);
    a=strlen(x);
    for(j=0;j<a;j++)
       {
         for(b=0;b<a;b++)
           {if(b==j) continue; else if(x[b]==x[j])  break;}
        if(b==a) break;}
   if(j==a) printf("no\n");
   else printf("%c\n",x[j]);
     }
  return 0;
}

char tran(char ch)
{
  char y;
  if(ch<='Z'&&ch>='A')
    y=ch;
  else
    y=ch+'A'-'a';
  return y;
}
main()
{
   int lenc,i,p=0,a[1000]={1};
   char b[1000],c[1000];
   gets(c);
   lenc=strlen(c);
   for(i=0;i<lenc;i++)
     c[i]=tran(c[i]);
   b[0]=c[0];
   for(i=1;i<lenc;i++)
     {
        if(c[i]==c[i-1])
           a[p]++;
        else
           {
            p++;
            b[p]=c[i];
            a[p]=1;
           }
     }
   for (i=0;i<=p;i++)
      printf("(%c,%d)",b[i],a[i]);
}

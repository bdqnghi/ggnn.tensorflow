int main()
{
   int n,m,i,t=0,j,c=0;
   char s[80],a[80];
   char  b[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   scanf("%d %s %d",&n,s,&m);
   for(i=0;s[i]!='\0';i++)
   {
         for(j=0;j<37;j++)
         {
               if(s[i]==b[j]||(s[i]==b[j]+32&&s[i]>='a'&&s[i]<='z'))
              {
                  t=t*n+j;
              }
          }
    }
   for(i=79;i>0;i--)
   {
          a[i]=b[t%m];
          c++;
          t=t/m;
          if(t==0)
          {
             break;
          }
   }
   for(i=80-c;i<80;i++)
  {
       printf("%c",a[i]);
  }
      return 0;
}
int main()
{
   int n,i,j,q,l;
   char sr[1],a[100];
   gets(sr);
   n=atoi(sr);
   for(i=1;i<=n;i++)
   {
      gets(a);
      l=strlen(a);
      if(a[0]=='_'||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')) 
        q=1; 
        else q=0;
        if(q==1)
        for(j=1;j<l;j++)
        {
         if(a[j]=='_'||(a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')||(a[j]>='0'&&a[j]<='9'))
         q=1;
         else 
         {
              q=0;
              break;
              } 
       }  
             
              printf("%d\n",q);
              }
              getchar();
              getchar();
              }
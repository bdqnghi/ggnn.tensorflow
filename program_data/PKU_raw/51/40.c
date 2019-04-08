int main()
{
   int i,j,k,max,n,l1,l;
   char c,s[1000];
   char a[1000][1000];
   int b[1000];
   scanf("%d",&n);
   scanf("%s",s);
   l1=strlen(s);
   j=0;
   memset(a,0,sizeof(a));
   l=l1-n+1;
   for (i=0;i<=l1-n;i++)
   {
      for  (j=0;j<n;j++)
      a[i][j]=s[i+j];
       }       
   memset(b,0,sizeof(b));    
   for (i=0;i<l;i++)
   {
       k=0;
       for (j=0;j<i;j++)
       if (strcmp(a[i],a[j])==0) 
       {
          b[j]++;
          k=1;
          break;
          }
       if (k==0) b[i]++;                            
    }
    max=0;
   for (i=0;i<l;i++) if (max<b[i]) max=b[i];
   if (max==1) printf("NO");
   else 
   {
        printf("%d\n",max);
        for (i=0;i<l;i++)
        if (b[i]==max) printf("%s\n",a[i]); 
}
  
} 

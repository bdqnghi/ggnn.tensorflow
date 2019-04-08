int main()
{
    int n,i,j,k;
    char a[100],b[12];
    scanf("%d",&n);
    gets(b);
    for(i=0;i<n;i++)
      {
       int l;             
      gets(a);
      l=strlen(a);
      for(j=0;j<l;j++)
         {if((a[j]>='A'&&a[j]<='z')||(a[j]<='9'&&a[j]>='0')||a[j]=='_')
           continue;
          else
          break;} 
      if(j==l)     
       {
           if((a[0]<='z'&&a[0]>='A')||a[0]=='_')
          printf("1\n");
      else
           printf("0\n");
           }
      else
         printf("0\n");
     }
     getchar();
     getchar();
     getchar();
} 
int main()
{
    int n,i,j,s=-1,t=-1,k,age[100],e[100],h[100];
    char a[100][10],b[100][10],c[100][10],f[10];
    scanf("%d",&n);
    for(i=0;i<=(n-1);i++)
      { 
       scanf("%s %d",a[i],&age[i]);
       }
    for(i=0;i<=(n-1);i++)
    {
      if(age[i]>=60)
        {
       
        s=s+1;
        e[s]=age[i];
         strcpy(b[s],a[i]);
        }             
      else
      {
         
          t=t+1;
          h[t]=age[i];
           strcpy(c[t],a[i]);
          
          }
      }
    for(j=0;j<s;j++)
    {
         for(i=0;i<s-j;i++)
         {
           if(e[i]<e[i+1])
           {
              k=e[i];
              e[i]=e[i+1];
              e[i+1]=k;
               strcpy(f,b[i]);
                strcpy(b[i],b[i+1]);
                 strcpy(b[i+1],f);         
           }                   
         }                
                         }
      for(i=0;i<=s;i++)
      {
        printf("%s\n",b[i]);                   
                           }
      for(i=0;i<=t;i++)
      {
        printf("%s\n",c[i]);                   
                           }
                           getchar();
                           getchar();
                           return 0;                                        
    }

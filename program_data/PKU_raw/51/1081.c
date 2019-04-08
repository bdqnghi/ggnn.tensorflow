

int main()
{
   int i,j,k,l,m,n,x;
   char a[1000];
   int c[1000]={0};
   int d[1000]={0};
   char b[1000][1000];
   scanf("%d",&m);
   scanf("%s",a);
   n=strlen(a);
   l=n+1-m;
   for(i=0;i<l;i++)
      {
          for(j=0;j<m;j++)
             {
                 b[i][j]=a[i+j];
             }
      }
   for(i=0;i<l;i++)
      {
          for(j=i+1;j<l;j++)
             {                             
                 for(k=0,x=0;k<m;k++)
                    {
                        if(b[i][k]==b[j][k])
                        {x=x+1;} 
                    }
                 if(x==m)
                 {c[i]++;}  
                 d[i]=c[i];
             }
      }
   for(i=0;i<l;i++)
      {
          for(j=0;j<l-1;j++)
             {
                 if(c[j]>c[j+1])
                   {
                       x=c[j+1];
                       c[j+1]=c[j];
                       c[j]=x;
                   }  
             }
      }
   x=c[l-1];
   if(x==0)
   {printf("NO");}
   else
   {
   
   
   printf("%d\n",x+1);
   for(i=0;i<l;i++)
      {
          if(d[i]==x)
          {
                for(k=0;k<m;k++)
                   {
                     printf("%c",b[i][k]);
                   }
                printf("\n");
          }
      }
}
}
      
int main()
{
  int a[5][5];
  int i,j,b=0,c=0,n=0,k;
  for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
      scanf("%d",&a[i][j]);
    }
  for(i=0;i<5;i++)
    { 
      b=0;
      c=0;
      for(j=0;j<5;j++)
       {
         if(a[i][j]>b)
         b=a[i][j];
       }
      for(j=0;j<5;j++)
       { 
         if(a[i][j]==b)
           { 
             c=a[0][j];
             for(k=0;k<5;k++)
               {
                 if(a[k][j]<c)
                 c=a[k][j];
               }
             if(b==c)
               {
                 n++;
                 if(n==1)
                 printf("%d %d %d",i+1,j+1,b);
                 if(n>1)
                    {
                        printf(" ");
                        printf("%d",i,j,b);
                    }
               }        
           }
       }
    } 
if(n==0)
printf("not found");
return 0;
}
main()
{
int a[100][100];
int b[100][100];
int c[100][100];
int i,j,k,x1,y1,x2,y2;
int sum=0;
int count=1;
scanf("%d %d",&x1,&y1);
for(i=0;i<=x1-1;i++)
{
     for(j=0;j<=y1-1;j++)
     {
          scanf("%d",&a[i][j]);                    
     }                    
}
scanf("%d %d",&x2,&y2);
for(i=0;i<=x2-1;i++)
{
     for(j=0;j<=y2-1;j++)
     {
          scanf("%d",&b[i][j]);                    
     }                    
}
for(i=0;i<=x1-1;i++)
{
     for(j=0;j<=y2-1;j++)
     {
          sum=0;
          for(k=0;k<=y1-1;k++)
          {
             sum=sum+a[i][k]*b[k][j];
          }
          c[i][j]=sum;                   
     }                    
}
for(i=0;i<=x1-1;i++)
{
     for(j=0;j<=y2-1;j++)
     {
          if(y2==1)
          {
             printf("%d\n",c[i][j]);
          }
          if(y2>1)
          {
             if(count%y2==1)
             {
                printf("%d",c[i][j]);
             }
             else 
             {
                if(count%y2==0)
                {
                   printf(" %d\n",c[i][j]);
                }
                else
                { 
                   printf(" %d",c[i][j]);               
                }  
             }
             count++;
          }                    
     }                    
}
getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();      
}

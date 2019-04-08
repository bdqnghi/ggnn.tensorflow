int main()
{
 int a[102][102],b[102][102],c[102][102]={0};
 int x1,x2,y1,y2,i,j,k;
 scanf("%d %d",&x1,&y1);
 for(i=0;i<x1;i++)
   for(j=0;j<y1;j++)
     scanf("%d",&a[i][j]);
  scanf("%d %d",&x2,&y2);
  for(i=0;i<x2;i++)
   for(j=0;j<y2;j++)
     scanf("%d",&b[i][j]);
   for(i=0;i<x1;i++)
     for(j=0;j<y2;j++)
      {
       for(k=0;k<y1;k++)
         {c[i][j]=c[i][j]+a[i][k]*b[k][j];
          }
       }
   for(i=0;i<x1;i++)
     {
       for(j=0;j<y2-1;j++)
        {
         printf("%d ",c[i][j]);
         }
        printf("%d\n",c[i][y2-1]);
      }
return 0;
}
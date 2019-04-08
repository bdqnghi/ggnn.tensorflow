main()
{
 int a[101][101],b[101][101],c[101][101],x1,y1,x2,y2,i,j,q;
 scanf("%d %d",&x1,&y1);
 for(i=1;i<=x1;i++)
   {for(j=1;j<=y1;j++) 
      scanf("%d",&a[i][j]);}  
 scanf("%d %d",&x2,&y2);
 for(i=1;i<=x2;i++)
  {for(j=1;j<=y2;j++)
   scanf("%d",&b[i][j]);}
 for(i=1;i<=x1;i++)
  for(j=1;j<=y2;j++)
  { c[i][j]=0;
    for(q=0;q<=x2;q++)
     c[i][j]=c[i][j]+a[i][q]*b[q][j]; 
         }   
 for(i=1;i<=(x1-1);i++)
  {printf("%d",c[i][1]);
   for(j=2;j<=y2;j++)
    {printf(" %d",c[i][j]);}
      printf("\n");}                              
   printf("%d",c[x1][1]);
   for(j=2;j<=y2;j++) 
   printf(" %d",c[x1][j]);
}
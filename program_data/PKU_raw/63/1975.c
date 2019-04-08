main()
{
 int x1,x2,y1,y2,i,j,k,m,n;
 scanf("%d %d",&x1,&y1);
 int s[x1][y1];
 for(i=0;i<x1;i++)
   {
     for(j=0;j<y1;j++)
       scanf("%d",&s[i][j]);
   }
 scanf("%d %d",&x2,&y2);
 int t[x2][y2];
 for(i=0;i<x2;i++)
   {
     for(j=0;j<y2;j++)
       scanf("%d",&t[i][j]);
   }
 int r[x1][y2];
 for(i=0;i<x1;i++)
   {
     for(j=0;j<y2;j++)   
       {
         r[i][j]=0;
         for(k=0;k<y1;k++)
             r[i][j]=r[i][j]+s[i][k]*t[k][j];
       }
   }
 for(i=0;i<x1;i++)
   {
     printf("%d",r[i][0]);
     for(j=1;j<y2;j++)
       printf(" %d",r[i][j]);         
     printf("\n");
   } 
}

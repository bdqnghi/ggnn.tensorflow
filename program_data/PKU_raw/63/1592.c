int q;
int a[101][101], b[101][101];
int c(int i,int j)
{int m=0,k;
 for(k=0;k<q;k++)
 m+=a[i][k]*b[k][j];
 return m;
    }
main()
{
  int x1,y1,x2,y2,s,p,i,j,k;
  scanf("%d%d",&x1,&y1);
  for(s=0;s<x1;s++)
     {
        for (p=0;p<y1;p++)
        scanf("%d",&a[s][p]);
     }
  scanf("%d%d",&x2,&y2);
  for(s=0;s<x2;s++)
     {
        for (p=0;p<y2;p++)
        scanf("%d",&b[s][p]);
     }
     q=y1;
  
  for(i=0;i<x1;i++)
     {
       for(j=0;j<y2;j++)
         {printf("%d",c(i,j));
          if(j!=y2-1)
          printf(" ");
         } 
      if (i!=x1-1)
      printf("\n");
     }

     
    getchar(); 
}
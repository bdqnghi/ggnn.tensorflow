int main()
{
  int a[11][11]={0},b[11][11] ={0};
  int m,n,i,j,k;
  int(*p1)[11],(*p2)[11],(*pTemp)[11];
  p1=a;
  p2=b;
  
  
  for (i=0;i<=10;i++)
    {   for (j=0;j<=10;j++)
        {
         a[i][j]=0;
         b[i][j]=0;
        }
     }
  scanf("%d%d",&m,&n);
  a[5][5]=m;
  
  for (k=1;k<=n;k++)
     {   
         for ( i=1;i<=9;i++)
          {
              for ( j=1;j<=9;j++) 
              {
                   int sum=  + *(*(p1+i)+ j-1)+*(*(p1+i)+ j+1) +*(*(p1+i-1)+ j) +*(*(p1+i-1)+ j-1)+*(*(p1+i-1)+ j+1) +*(*(p1+i+1)+ j) +*(*(p1+i+1)+ j-1)+*(*(p1+i+1)+ j+1) ;
                * (*(p2+i)+j )  = sum +( *     (   * (p1+i)  +j )      )  *2 ;
              }
          }
         pTemp=p1;
         p1=p2;
         p2=pTemp; 
     }
     
    for ( i=1;i<=9;i++)
          {
              for ( j=1;j<=9;j++) 
              {
                  if (j!=9)
                  printf("%d ",p1[i][j]);
                  else 
                  printf( "%d\n",p1[i][j]);
              }
          }
  
 
    
}

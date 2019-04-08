int a[5][5];
int judge(int x,int y)
{
  int i,j;
  for(i=0;i<5;i++)
    if(a[i][y]<a[x][y])
       return 0;
  for(j=0;j<5;j++)
    if(a[x][j]>a[x][y])
      return 0;
  return 1;
}
main()
{
   int i,j,k=0;
   for(i=0;i<5;i++)
     for(j=0;j<5;j++)
       scanf("%d",&a[i][j]);
   for(i=0;i<5;i++)
     for(j=0;j<5;j++) 
       if(judge(i,j)) 
         {
           printf("%d %d %d",i+1,j+1,a[i][j]);
           k=1;
         }
   if (k==0)
     printf("not found");        
}
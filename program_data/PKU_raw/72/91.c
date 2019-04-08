/*????*/
void judge(int a[][20],int m,int n)
{
   int i=0,j=0;
   if(a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j])  printf("%d %d\n",i,j);
   for(j=1,i=0;j<n-1;j++) 
   {
       if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>a[i+1][j]) printf("%d %d\n",i,j);
   }
   j=n-1;
   if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j]) printf("%d %d\n",i,j);
   for(i=1;i<m-1;i++)
   {
      j=0;
      if(a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]) printf("%d %d\n",i,j);
      for(j=1;j<n-1;j++)
         if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]) printf("%d %d\n",i,j);
      j=n-1;
      if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j])  printf("%d %d\n",i,j);
   } 
   j=0;
   i=m-1;
   if(a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]) printf("%d %d\n",i,j);
   for(j=1;j<n-1;j++)  
	   if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]) printf("%d %d\n",i,j);
   
   j=n-1;
   if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i-1][j]) printf("%d %d\n",i,j);
}
void main()
{
   int m,n,i,j;
   scanf("%d%d",&m,&n);
   int a[20][20];
   
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
          scanf("%d",&a[i][j]);
   }
   
   judge(a,m,n);
   
}
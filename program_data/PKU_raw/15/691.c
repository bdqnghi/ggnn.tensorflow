
int main()
{
   int i,j,n,a[1000][1000];
   int x1=0,y1=0,x2=0,y2=0;
   int area;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
      {
         scanf("%d",&a[i][j]);
      }
   }
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
      {
         if(a[i][j]==0)
         {
            x1=i+1;
            y1=j+1;
            break;
         }
      }
      if(x1!=0||y1!=0) break;
   }
   for(i=n-1;i>=0;i--)
   {
      for(j=n-1;j>=0;j--)
      {
         if(a[i][j]==0)
         {
            x2=i-1;
            y2=j-1;
            break;
         }
      }
      if(x2!=0||y2!=0) break;
   }
   area=(x2-x1+1)*(y2-y1+1);
   printf("%d\n",area);
  return 0;
}

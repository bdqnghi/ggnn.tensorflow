
int main(int argc, char *argv[])
{
  int n,a[100][100],i,j,i1,i2,j1,j2,k1=0,k2=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
   for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
  for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
        if(a[i][j]==0)
         {
              i1=i;
              j1=j;
              k1=1;
              break;               
         }
       if(k1==1) break;
   }
  for(i=n-1;i>=0;i--)
   {
       for(j=n-1;j>=0;j--)
        if(a[i][j]==0)
         {
              i2=i;
              j2=j;
              k2=1;
              break;               
         }
       if(k2==1) break;
   }
  printf("%d",((i2-i1-1)*(j2-j1-1)));

  return 0;
}

int main()
{
   int n,i,j,y[200],p[200];
   char a[100][11];
   scanf("%d",&n);
   for(i=0;i<200;i++)
   {
    p[i]=200-i;
   }
   for(i=0;i<n;i++)
  {
    scanf("%s %d",a[i],&y[i]);
  }
  for(i=0;i<=140;i++)
  {
    for(j=0;j<n;j++)
     {
       if(y[j]==p[i])
       printf("%s\n",a[j]);
     }
  }
  for(i=0;i<n;i++)
 {
  if(y[i]<60)
  printf("%s\n",a[i]);
 }
  getchar();
  getchar();
}

int main(int argc, char *argv[])
{
  int n,k,i,j,jude=0;
  scanf("%d %d",&n,&k);
  int a[n];
  for (i=0;i<=n-1;i++)
    scanf("%d",a+i);
  for (i=0;i<=n-1;i++)
  {
      for (j=i+1;j<=n-1;j++)
         if (a[i]+a[j]==k)
           {jude=1;break;}
   }
   if (jude==1)
   printf("yes");
   else
   printf("no");
  return 0;
}

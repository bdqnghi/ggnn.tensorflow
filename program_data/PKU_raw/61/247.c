int main()
{
int f[25]={0,1,1},n,a[20],i,j;
for(i=3;i<=25;i++) 
   {
      f[i]=f[i-1]+f[i-2];
   }
scanf("%d",&n);
for(j=0;j<n;j++)
   {
      scanf("%d",&a[j]);
      printf("%d\n",f[a[j]]);
   }
return 0;
}
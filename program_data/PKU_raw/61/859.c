int main ()
{
    int i,n,j,a[20],s[20];
    int f[20];
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
   scanf("%d",&a[j]);
   }      
   for(i=3;i<=20;i++)
   {
      f[1]=1;
      f[2]=1;
     f[i]=f[i-2]+f[i-1];
     }
      for(i=1;i<=20;i++)
         for(j=0;j<n;j++)
         if(a[j]==i)
         {
         s[j]=f[i];
         }
         for(j=0;j<n;j++)
         printf("%d\n",s[j]);
         getchar ();
         getchar ();
         return 0;
}

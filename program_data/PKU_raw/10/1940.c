int com(const void *a,const void *b)
{
    return(*(int *)a-*(int *)b);
}
int main()
{
   int n,i;
   int a[30];
   int s[30];
   for(int i=0;i<30;i++)
   s[i]=1;
   scanf("%d",&n);
   for(int i=0;i<n;i++) 
   scanf("%d",&a[i]);
   for(int i=n-2;i>=0;i--)
   {
    for(int j=n-1;j>i;j--)
    {
     if(a[i]>=a[j])
     {
      s[i]=max(s[j]+1,s[i]);
     }
    }
   }
   qsort(s,30,sizeof(int),com);
   printf("%d",s[29]);
   getchar();
   getchar();
}

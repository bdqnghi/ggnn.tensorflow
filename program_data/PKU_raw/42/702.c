int main()
{
    int m,n,i,k;
    int a[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
       if(a[i]!=m)
      {
       printf("%d",a[i]);
       k=i;
       break;
      }
    }
    for(int i=k+1;i<n;i++)
    {
     if(a[i]!=m)
     printf(" %d",a[i]);
     getchar();
     getchar();
    }
}

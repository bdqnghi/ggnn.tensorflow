int main()
{
    int n,a[100],*p,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
          scanf("%d",&a[i]);
     }
     p=a;
     for(i=n-1;i>=0;i--)
     {
                 if(i==n-1)
                 printf("%d",*(p+i));
                 else
                 printf(" %d",*(p+i));
       }
      return 0;
}
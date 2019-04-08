int main()
{
    int max1,max2,n,i;
    scanf ("%d",&n);
    int a[n];
    i=0;
    max1=a[n-1]; 
    for(i=0;i<=n-1;i++)
    {
              scanf("%d",&a[i]);
    }
    i=n-1; 
    for(i=n-1;i>=1;i--)
    {
                       if(a[i-1]<a[i])
                       {
                                      max1=a[i];
                                      a[i]=a[i-1];
                                      a[i-1]=max1;
                       }
    } 
    i=n-1;
    max2=a[n-1];
    for(i=n-1;i>=2;i--)
    {
                       if(a[i-1]<a[i])
                       {
                                      max2=a[i];
                                      a[i]=a[i-1]; 
                                      a[i-1]=max2;
                       }
    } 
    printf("%d\n%d\n",a[0],a[1]);
    scanf("%d",i); 
    return 0;
} 
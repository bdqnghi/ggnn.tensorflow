
 int main()
 {
    int a[MAX];
    int n,k,i,j,d;
    d=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=1;(i+j)<n;j++)
       {
          if((a[i]+a[i+j])==k)
          {
             printf("yes");
             d=1;
             break;
          }
       }
        if((a[i]+a[i+j])==k)
          {
             d=1;
             break;
          }
    }
    if(d==0)
    printf("no");
    return 0;
 }

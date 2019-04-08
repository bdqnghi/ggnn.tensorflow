int main()
{
    int a[20000],i=1,j,f,b,n;
    scanf("%d",&n);
    scanf("%d",&f);
    a[0]=f;
    for( ;i<n;i++)
    {
         scanf("%d",&b);
         a[i]=b;
    }
    printf("%d",f);
    for(i=0;i<n;i++)
    {
                    for(j=i+1;j<n;j++)
                    {
                                      if(a[i]==a[j])
                                      a[j]=-1;
                    }
    }
    for(i=1;i<n;i++)
    {
                    if(a[i]>0)
                    printf(",%d",a[i]);
    }

    return 0;
}
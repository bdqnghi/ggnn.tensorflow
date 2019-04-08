int main()
{
    int i,j,n,k;
    int a[10000];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%d",&a[i]);
                    if(i==0)
                    printf("%d",a[i]);
                    else
                    {
                     k=0;
                    for(j=0;j<i;j++)
                    {
                                    if(a[i]==a[j])
                                    {
                                                  k=1;
                                    }
                    }
                    if(k==0)
                    printf(" %d",a[i]); 
                    }
    }
    return 0;
}                    

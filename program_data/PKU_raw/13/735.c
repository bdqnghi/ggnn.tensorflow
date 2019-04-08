int main()
{
    int n,a[20000],i,j,k=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
                    // a[i]>=10&&a[i]<100;
                    scanf("%d",&a[i]);
                    //a[i]>=10&&a[i]<100;
    }
    printf("%d",a[0]);
    for(i=1;i<n;i++)
    {
                    for(j=0;j<i;j++)
                    {
                                    if(a[i]==a[j])
                                    k=k+1;
                    }
                    if(k==0)
                    printf(" %d",a[i]);
                    k=0;
                    
    }
    getchar();
    getchar();
}


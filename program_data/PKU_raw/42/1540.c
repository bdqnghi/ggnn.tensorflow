int main()
{
    int i=0,n,j,k,s=0;
    scanf("%d",&n);
    int a[100000];
    for(i;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            for(j=i;j<n;j++)
            {
                a[j]=a[j+1];
            }
            n--;
            i--;
            s++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        if(i!=n-1)
        printf(" ");
    }
    
    return 0;
}


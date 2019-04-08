
int main()
{
    int a[20000];
    int check[100]={0};
    int n,i;
    
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (i=0; i<n; i++)
    {
        if (check[a[i]]==0)
        {
            if (i==0) {
                printf("%d",a[i]);
            }
            else
            {
                printf(" %d",a[i]);
            }
            check[a[i]]=1;
        }
    }
    return 0;
}
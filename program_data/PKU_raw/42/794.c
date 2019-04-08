 
int main()
{
    int n,a[100001],k,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
                     scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=1;i<=n;i++)
    {
                     if(a[i]==k)
                     {
                                for(j=i;j<n;j++)
                                {
                                a[j]=a[j+1];
                                }
                                n--;
                                i--;
                     }
    }
    for(i=1;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    printf("%d\n",a[n]);
    getchar();
    getchar();
    getchar();
}
 

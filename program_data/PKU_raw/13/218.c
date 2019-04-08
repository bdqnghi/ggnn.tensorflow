int main ()
{
    int n,k;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&a[0]);
    printf("%d",a[0]);
    for (int i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
        k=1;
        for (int j=0;j<i;j++)
        {    if (a[i]==a[j])
            k=0;}
        if(k!=0) printf(" %d",a[i]);
           
        }
    }

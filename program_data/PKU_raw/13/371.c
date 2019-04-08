int main()
{
    int n,k=0;
    scanf("%d",&n);
    int i,j;
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d", &a[i]);
    printf("%d",a[0]);
    for(i=1;i<n;i++)
    {for(j=0;j<i;j++) 
    {if(a[j]!=a[i]) 
    k++;}
    if(k==i)
    printf(" %d",a[i]);
    k=0;
    }
    getchar();
    getchar();
}
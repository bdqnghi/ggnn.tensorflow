
int main(int argc, char *argv[])
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    scanf("%d",&a[i-1]);
    for(i=n-1;i>=1;i--)
    printf("%d ",a[i]);
    printf("%d",a[0]);
    	
    return 0;
}

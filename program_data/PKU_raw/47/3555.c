int main(){
    int n,i,l;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        l=n-i-1;
        b[i]=a[l];
        printf("%d ",b[i]);
    }
    b[n-1]=a[0];
    printf("%d",b[n-1]);
    return 0;
}



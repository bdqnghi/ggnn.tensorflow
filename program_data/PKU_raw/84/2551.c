int main()
{
    int n,t,i,j,a[100],k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        k=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[k])
                k=j;
        }
        if(k!=i){
            t=a[k];
            a[k]=a[i];
            a[i]=t;
        }
    }
    printf("%d\n%d",a[n-1],a[n-2]);
    return 0;
}
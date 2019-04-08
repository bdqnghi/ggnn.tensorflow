int main()
{
    int a[MAX],i,j,n,t;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    for (i=0,j=n-1;i<j;i++,j--){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    for (i=0;i<n;i++){
        if(i==n-1){
            printf("%d",a[i]);
        }
       else{printf("%d ",a[i]);}
    }
    return 0;
}

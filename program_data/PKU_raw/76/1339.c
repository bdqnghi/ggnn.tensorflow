int main()
{
    int a[50000];
    int b[50000];
    int i,n,k,e;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&(a[i]),&(b[i]));
    }
    for(k=1;k<=n-1;k++){
        for(i=1;i<=n-k;i++){
            if(a[i]>a[i+1]){
                e=a[i];
                a[i]=a[i+1];
                a[i+1]=e;
                e=b[i];
                b[i]=b[i+1];
                b[i+1]=e;
            }
        }
    }
    for(i=1;i<=n-1;i++){
        if(b[i]<a[i+1]){printf("no");return 0;}
        else{if(b[i]>=b[i+1]){a[i+1]=a[i];b[i+1]=b[i];}
        else{a[i+1]=a[i];}}
    }
    printf("%d %d",a[n],b[n]);
    return 0;
}






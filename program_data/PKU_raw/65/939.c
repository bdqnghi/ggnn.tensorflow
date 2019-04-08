int main(){
    int n,i,j=0,k=0;
    int a[300],b[300];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
        if(a[i]==b[i]){j++;k++;}
        if(a[i]==1&&b[i]==0)k++;
        if(a[i]==1&&b[i]==2)j++;
        if(a[i]==0&&b[i]==1)j++;
        if(a[i]==0&&b[i]==2)k++;
        if(a[i]==2&&b[i]==0)j++;
        if(a[i]==2&&b[i]==1)k++;
    }
    if(j==k)printf("Tie");
    if(j>k)printf("A");
    if(j<k)printf("B");
    return 0;
}

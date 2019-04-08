int main(){
    int i,j,k,o=0,p=0,n;
    char c[50][10],f[]={"female"},m[]={"male"};
    float h[50],a[50],b[50],u;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %f",c[i],&h[i]);
        }
    for(i=0;i<n;i++){
        if(strcmp(c[i],m)==0){
            a[o++]=h[i];
            }
        else if(strcmp(c[i],f)==0){
            b[p++]=h[i];
            }
        }
    for(k=1;k<o;k++){
        for(i=0;i<o-k;i++){
            if(a[i]>a[i+1]){
                u=a[i+1];
                a[i+1]=a[i];
                a[i]=u;
                }
            }
        }
     for(k=1;k<p;k++){
        for(i=0;i<p-k;i++){
            if(b[i]<b[i+1]){
                u=b[i+1];
                b[i+1]=b[i];
                b[i]=u;
                }
            }
        }
    for(i=0;i<o;i++){
        printf("%.2f ",a[i]);
        }
    for(i=0;i<p-1;i++){
        printf("%.2f ",b[i]);
        }
    printf("%.2f",b[p-1]);
    
    scanf("%d",&i);
    return 0;
}

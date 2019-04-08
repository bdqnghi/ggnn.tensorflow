int main(){
    int n,k,i,j=0;
    scanf("%d",&n);
    int*a=(int*)malloc(sizeof(int)*n);
    int*b=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
                     scanf("%d",&a[i]);                 
    }
    scanf("%d",&k);
    for(i=0;i<n;i++){
                     if(a[i]!=k){
                                 b[j]=a[i];
                                 j++;            
                     }                 
    }
    for(i=0;i<j-1;i++){
                       printf("%d ",b[i]);                   
    }
    printf("%d",b[j-1]);
    free(b);
    free(a);
    return 0;
}
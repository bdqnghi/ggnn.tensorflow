int main(){
    int n,k,e;
    int sz[500],a[500];
    scanf("%d\n",&n);
    k=0;
    for (int i=0;i<n;i++){
        scanf("%d",&(sz[i]));
    }
    for(int i=0;i<n;i++){
        if(sz[i]%2==1){
            a[k]=sz[i];
            k++;
        }
    }
    for(int l=0;l<=k;l++){
        for(int i=0;i<k-1;i++){
            if(a[i]>a[i+1]){
               e=a[i+1];
               a[i+1]=a[i];
               a[i]=e;
            }
        }
    }
    for(int i=0;i<k;i++){
        if(i==0){
            printf("%d",(a[i]));
        }
        else{
            printf(",%d",(a[i]));
        }        
    }
return 0;
}

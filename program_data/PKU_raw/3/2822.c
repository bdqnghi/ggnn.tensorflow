int main(){
    int a[1000];
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]+a[j]==k){printf("yes");
            return 0;}
        }
    }printf("no");
    return 0;
   
}

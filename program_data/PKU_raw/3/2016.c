int main(){
    int n,k,i,a[10000],right=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
                     scanf("%d",&a[i]);
    }
    int j;
    for(i=0;i<n-1;i++){
                       for(j=i+1;j<=n;j++){
                                           if(a[i]+a[j]==k){
                                                            right=k;
                                                            break;
                                           }                
                       }
                       if(right==k){
                                    printf("yes");
                                    break;
                       }else if(i==n-2&&right!=k){
							printf("no");
                       }
    }
    return 0;
}

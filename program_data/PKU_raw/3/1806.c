int main(){
    int n,k,sum=0;
    scanf("%d %d",&n,&k);
    int sz[1000];
    for(int i=0;i<n;i++){
        scanf("%d",&sz[i]);
    }
    for(int j=0;j<n;j++){
        for(int h=0;h<n;h++){
            if(sz[j]+sz[h]==k){
                sum++;
            }
        }
    }
    if(sum==0){
        printf("no");
    }else{
        printf("yes");
    }
    return 0;
}

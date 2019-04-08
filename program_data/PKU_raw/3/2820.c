int main(){
    int n;
    int k;
    scanf("%d ",&n);
    scanf("%d",&k);
    int sz[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&sz[i]);
    }
    int x=0;
    for(int i=0;i<n;i++){
        for(int m=0;m<n;m++){
            if(sz[m]+sz[i]==k){
              x++;  
            }
            else{
                continue;
            }
        }
    }
    if (x>0){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}

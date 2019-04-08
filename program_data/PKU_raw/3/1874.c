int main(){
    int n,k,i,m;
    scanf("%d %d",&n,&k);
    int sz[n];
    for(i=0;i<n;i++){
            scanf("%d ",&sz[i]);
    }
    for(i=0;i<n-1;i++){
            for(m=i+1;m<n;m++){
                   if(sz[i]+sz[m]==k){
                             printf("yes");
                             break;
                   }
            }
            if(sz[i]+sz[m]==k){
                             break;
            }       
    }
    if(sz[i]+sz[m]!=k){
               printf("no");
    }
    return 0;
}


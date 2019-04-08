int main(){
    int n,k,i,s,j,m;
    s=0;
    m=0;
    int sz[1000];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&(sz[i]));
    }
    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           m=sz[i]+sz[j];
        if(m==k){
            printf("yes");
            return 0;
        }
    }
    }
    printf("no");
    return 0;
}
    


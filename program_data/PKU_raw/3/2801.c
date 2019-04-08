int main(){
    int n,k,z[1000],i,j;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&z[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(z[i]+z[j]==k){
                if(i!=j){
                    printf("yes");
                    return 0;
                }else{continue;}
            }
        }
    }
    printf("no");
    return 0;
}

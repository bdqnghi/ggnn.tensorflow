int main(){
    int n,i,j,k;
    int zong[100],you[100];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&zong[i],&you[i]);
        if(i>=1){
            if(you[i]*1.0/zong[i]-you[0]*1.0/zong[0]>0.05){
                printf("better\n");
            }else if(you[0]*1.0/zong[0]-you[i]*1.0/zong[i]>0.05){
                printf("worse\n");
            }else {
                printf("same\n");
            }
        }
    }
    
    return 0;
}
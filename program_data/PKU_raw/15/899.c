int main(){
    int n,i,k,a1,a2,b1,b2,f=-1,s=0;
    int (sz[1000][1000]);
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        for(k=0;k<n;k++){
            scanf("%d",&(sz[i][k]));
            getchar();
            if(((sz[i][k])==0)&&(f==-1)){
                 a1=i;
                 b1=k; 
                 f=1;                   
            }
            if((sz[i][k])==0){
                 a2=i;
                 b2=k;
            }
        }
    }
    
    s=(b2-b1-1)*(a2-a1-1);
    printf("%d\n",s);
    getchar();
    return 0;
}

int main(){
    int i,j,n,k;
    int s;
    int sz[1000];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
                     scanf("%d",&sz[i]);
                     }
    for(i=0;i<n-1;i++){
                       for(j=i+1;j<=n-1;j++){
                                            if(sz[i]+sz[j]==k){
                                                  s=1;
                                                  break;
                                                  }
                                            else
                                                   s=0;
                                                   }
                       if(s==1){
                                  printf("yes");
                                  break;
                                  }
                       if(i==n-2&&s==0)  
                                printf("no");
                                }
                               
                                return 0;
}
                                                  

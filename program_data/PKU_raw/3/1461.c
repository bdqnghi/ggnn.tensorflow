int main(){
 int sz[SUM];
 int n,k;
 scanf("%d%d",&n,&k);
 int i;
 for(i=0;i<n;i++){
                  scanf("%d",&sz[i]);
                  }
 int j,sum=0;
 for(j=0;j<n-1;j++){
                  for(i=1;i<=n-j-1;i++){
                                      if(sz[j]+sz[j+i]==k){
                                                           sum++;
                                                           }
                                      }
                  }
 if(sum!=0){
            printf("yes");
            }
 else{
      printf("no");
      }
            
 return 0;
}
int main (){
    int n,i,k,l;
    scanf("%d\n",&n);
    int sz[n][2];
    for (i=0;i<n;i++){
        for(k=0;k<2;k++){
        scanf("%d",&sz[i][k]);
        }
       }
       l=0;
    for (i=0;i<n;i++){
        
       if(((sz[i][0])-(sz[i][1])==-1)||((sz[i][0])-(sz[i][1])==2)){
                                                            l++;
                                                            }
       if((sz[i][0])-(sz[i][1])==0){
                                   l+=0;
                                   }
       if((sz[i][0])-(sz[i][1])==1||(sz[i][0])-(sz[i][1])==-2){
                                                            l--;
                                                             }
                                                             }
                                                      if(l>0){
                                                              printf("A");
                                                              }else if(l==0){
                                                                    printf("Tie");}
                                                                    else {
                                                                         printf("B");
                                                                         }                                                                               
    return 0;
}
int main(){
    char ci[300],*ps;
    scanf("%s",ci);
    int a=strlen(ci);
    int sum0=0;
    for(int i='A';i<='z';i++){
            char zimu;
            int sum=0;
            for(ps=ci;ps<ci+a;ps++){
                    if(*ps==i&&(*ps<='Z'||*ps>='a')){
                               sum++;
                               sum0++;
                               }
                               }
            zimu=i;
            if(sum!=0){
                       printf("%c=%d\n",zimu,sum);
            }
    }
    if(sum0==0){
               printf("No");
               }
    return 0;
}

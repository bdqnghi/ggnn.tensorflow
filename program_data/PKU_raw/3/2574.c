
int ex(int *x,int *y){
    int tmp=0;
    tmp=*x;
    *x=*y;
    *y=tmp;
    }
int main(){
    int n,k;
    int s=0;
    int sz[1000];
    scanf("%d%d",&n,&k);
    for(int a=0;a<n;a++){
            scanf("%d",&(sz[a]));
            }
    for(int b=0;b<n;b++){
            for(int c=b+1;c<n;c++){
                    if((sz[c])+(sz[b])==k){
                                        s++;
                                        }
                    }
            }
    if(s==0){
             printf("no");
             }else{
    printf("yes");}

    return 0;
    }
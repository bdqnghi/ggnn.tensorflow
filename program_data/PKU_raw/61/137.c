int f(int n){
    int k;
    if(n==1||n==2) k=1;
    else{
        k=f(n-2)+f(n-1);
        }
    return k;
    }
int main(){
    int t,n,i,j;
    scanf("%d",&t);
    for(j=0;j<t;j++){
        scanf("%d",&n);
        i=f(n);
        printf("%d\n",i);
        }
    
    
    scanf("%d",&i);
    return 0;
    }

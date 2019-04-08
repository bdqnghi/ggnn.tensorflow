int f(int n){
    int result;
    if(n==1||n==2) return 1;
    else{
        result=f(n-1)+f(n-2);
        return result;
        } 
    }
int main(){
    int n,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        printf("%d\n",f(n));
        }
    
    
    
    scanf("%d",&n);
    return 0;
    }

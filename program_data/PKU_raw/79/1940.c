 
int N,M;
 
int main(){
    int i;
    int alive,count;
    int x[320];
    
    while (1){
        scanf("%d%d",&N,&M);
        if (N==0 && M==0) break;
        alive = N;
        count = 0;
        memset(x,0,sizeof(x));
        for (i = 1; alive > 1 ;i = i%N+1){
            if (!x[i]){
                count++;
                if (count == M){
                    x[i] = 1;
                    alive --;
                    count = 0;
                }
            }
        }
        for (i = 1; i <= N ;i++)
           if(!x[i]) printf("%d\n",i);
    }

    return 0;
}
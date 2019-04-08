

int main(){
    int n;
    scanf("%d", &n);
    int m, timeCount, numCount;
    int num[60];
    while(n--){
        scanf("%d", &m);
        for(int i = 0; i < m; ++i){
            scanf("%d",& num[i]);
        }
        timeCount = numCount = 0;
        for(int i = 0; i < m; ++i){
            for(int j = numCount; j < num[i]; ++j){
                if(timeCount >= 60) break;
                timeCount ++;
                numCount ++;
            }
            if(timeCount >= 60) break;
            timeCount += 3; 
            //printf("i, timeCount, numCount: %d, %d, %d\n", i, timeCount, numCount);
        }
        for(; timeCount < 60; ++timeCount){
            numCount ++;
        }
        printf("%d\n", numCount);
    }
   
}

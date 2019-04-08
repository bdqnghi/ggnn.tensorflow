
int N,M;
int data[10010];

int main(){
    int i,t,j;
    scanf("%d",&N);
    M = 0;
    for (i = 1;i <= N ; i++){
        scanf("%d",&t);
        if (t%2) data[M++] = t;
    }
    for (i = M-1 ; i >= 0; i--){
        for (j = 0;j < i ; j++){
            if (data[j] > data[j+1]){
                data[j] = data[j+1] + data[j];
                data[j+1] = data[j] - data[j+1];
                data[j] = data[j]- data[j+1];
            }
        }
    }

    for (i = 0;i <= M-2; i++){
        printf("%d,",data[i]);
    }
    printf("%d\n",data[i]);

    return 0;
}

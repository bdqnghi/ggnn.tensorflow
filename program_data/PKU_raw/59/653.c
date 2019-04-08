
int DORM[MAXN][MAXN],N,SIGN[MAXN][MAXN];
void aff(int x,int y);

int main(){
    memset(DORM,0,sizeof(DORM));
    memset(SIGN,0,sizeof(SIGN));
    int M,sum=0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin.get();
        for(int j=0;j<N;j++){
            char m;
            cin.get(m);
            switch(m){
                case '.':
                    DORM[i][j]=-1;
                    break;
                case '#':
                    DORM[i][j]=0;
                    break;
                case '@':
                    DORM[i][j]=1;
                    break;
            }
        }
    }
    cin>>M;
    for(int m=1;m<M;m++){
        memset(SIGN,0,sizeof(SIGN));
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(DORM[i][j]==1&&SIGN[i][j]==0){
                    aff(i,j+1);
                    aff(i,j-1);
                    aff(i+1,j);
                    aff(i-1,j);
                }
            }
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(DORM[i][j]==1) sum++;
        }
    }
    cout<<sum;
    return 0;
}
void aff(int x,int y){
    if(x>=0&&x<N&&y>=0&&y<N){
        if(DORM[x][y]==-1&&SIGN[x][y]==0){
            DORM[x][y]=1;
            SIGN[x][y]=1;
        }
    }
}



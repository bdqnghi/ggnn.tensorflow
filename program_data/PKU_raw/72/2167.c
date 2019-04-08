
int n,m;
int area[21][21];
void scan();
void print();
int main(){
    scan();
    print();
    return 0;
}
void scan(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<n+2;i++){
        for(int j=0;j<m+2;j++){
        area[i][j]=0;
        }
}
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            scanf("%d",&area[i][j]);
        }
    }
}
void print(){
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if((area[i][j]>=area[i-1][j])&&(area[i][j]>=area[i+1][j])&&(area[i][j]>=area[i][j-1])&&(area[i][j]>=area[i][j+1])){
                printf("%d %d\n",i-1,j-1);
            }
        }
    }
}
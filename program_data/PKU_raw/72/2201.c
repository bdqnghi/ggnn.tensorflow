int area[100][100];
int main(){
    int m;
    int n;
    int i;
    int j;
    scanf("%d",&m);
    scanf("%d",&n); 
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
          scanf("%d",&area[i][j]);
    }}
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
           if((area[i][j]>=area[i-1][j])&&(area[i][j]>=area[i+1][j])&&(area[i][j]>=area[i][j-1])&&(area[i][j]>=area[i][j+1])){
               printf("%d %d\n",i,j);         }}
    }
    return 0;
}
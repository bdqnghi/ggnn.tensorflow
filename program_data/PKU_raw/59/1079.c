int main(){
    int n,m,sum=0,a;
    int num[10006][2];
    char room[106][106];
    memset(room,'\0',sizeof(room));
    scanf("%d",&n);
    getchar();
    for (int i=0;i<n;i++){
         for(int j=0;j<n;j++){
         scanf("%c",&room[i][j]);
         }
         getchar();
    }
    scanf("%d",&m);
    for (int d=2;d<=m;d++){
         memset(num,0, sizeof (num));
         a=0;
         for (int x=0;x<n;x++){
                  for(int y=0;y<n;y++){
                  if (room[x][y]=='@'){
                             if((x-1)>=0){
                             if (room[x-1][y]=='.'){
                             num[a][0]=x-1;
                             num[a][1]=y;
                             a++;
                             }
                             }
                             if ((x+1)<=n-1){
                             if (room[x+1][y]=='.'){
                             num[a][0]=x+1;
                             num[a][1]=y;
                             a++;
                             }
                             }
                             if ((y-1)>=0){
                             if (room[x][y-1]=='.'){
                             num[a][0]=x;
                             num[a][1]=y-1;
                             a++;
                             }
                             }
                             if ((y+1)<=n-1){
                             if (room[x][y+1]=='.'){
                             num[a][0]=x;
                             num[a][1]=y+1;
                             a++;
                             }
                             }
                  }
                  } 
         }
         for (int h=0;h<a;h++){
         room[num[h][0]][num[h][1]]='@';
         }
    }
    for (int k=0;k<n;k++){
         for (int t=0;t<n;t++){
         if (room[k][t]=='@'){
         sum++;
         }
         }
    }
    printf("%d",sum);
return 0;
}
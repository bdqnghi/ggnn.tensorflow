int main(){
    int visit[105][105];
    int num[105][105];
    int i,j,row,col;
    scanf("%d %d",&row,&col);
    for(i = 0; i < row; i++){
            for(j = 0; j < col; j++){
                    visit[i][j] = 0;
                    scanf("%d",&num[i][j]);
            }
    }
    int direct = right;
    int x = 0,y = 0;
    while(1){
             if(x < 0||x >= row||y < 0||y >= col||visit[x][y] == 1){break;}
             visit[x][y] = 1;
             printf("%d\n",num[x][y]);
             switch(direct){        //??????????????? 
                     case up:       //??????????????? 
                          if(x - 1 < 0||visit[x - 1][y] == 1){
                               direct = (direct + 1) % 4;
                          }
                          break;
                     case down:
                          if(x + 1 >= row||visit[x + 1][y] == 1){
                               direct = (direct + 1) % 4;
                          }
                          break;
                     case left:
                          if(y - 1 < 0||visit[x][y - 1] == 1){
                               direct = (direct + 1) % 4;
                          }
                          break;
                     case right:
                          if(y + 1 >= col||visit[x][y + 1] == 1){
                               direct = (direct + 1) % 4;
                          }
                          break;
                     default:break;
             }
             switch(direct){
                     case up:x--;break;
                     case down:x++;break;
                     case left:y--;break;
                     case right:y++;break; 
                     default:break;
             }
    }
    return 0;
}
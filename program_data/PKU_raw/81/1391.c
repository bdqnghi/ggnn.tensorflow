

int main()
{
    int judge(int array[][5],int x,int y);
    int sz[5][5],n,m,i,j;
    for(i=0;i<5;i++){
                     for(j=0;j<5;j++){
                                      scanf("%d",&sz[i][j]);
                                      }                     
                     }
    scanf("%d%d",&n,&m);
    if(judge(sz,n,m)==0){
                         printf("error\n");
                         }
    else{
         for(i=0;i<5;i++){
                          for(j=0;j<4;j++){
                                           printf("%d ",sz[i][j]);
                                           }
                          for(j=4;j<5;j++){
                                           printf("%d",sz[i][j]);
                                           }                                                                
                          printf("\n");
                          }
         }
   
    return 0;
    }
int judge(int array[][5],int x,int y)
{
    int a,t[5],i;
    a=(x>=0&&x<=4&&y>=0&&y<=4)?1:0;
    if(a==1){
             for(i=0;i<5;i++){
                              t[i]=array[x][i];
                              array[x][i]=array[y][i];
                              array[y][i]=t[i];
                              }
             }
    return a;
    }
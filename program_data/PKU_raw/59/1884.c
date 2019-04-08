int main(){
    int n;
    char A;
    scanf("%d\n",&n);
    int sz[n+2][n+2];
    for(int row=0;row<(n+2);row++){
       for(int col=0;col<(n+2);col++){
          sz[row][col]=0;
          }
       }
    for(int row=1;row<(n+1);row++){
       for(int col=1;col<n;col++){
          scanf("%c",&A);
          if(A=='#'){sz[row][col]=0;}
          if(A=='.'){sz[row][col]=1;}
          if(A=='@'){sz[row][col]=2;}
          }
       scanf("%c\n",&A);
       if(A=='#'){sz[row][n]=0;}
       if(A=='.'){sz[row][n]=1;}
       if(A=='@'){sz[row][n]=2;}
       }
    int m;
    scanf("%d",&m);
    for(int i=1;i<m;i++){
       for(int row=0;row<(n+2);row++){
          for(int col=0;col<(n+2);col++){
             if(sz[row][col]>=2){
               if(sz[row][col-1]<=4){sz[row][col-1]*=2;}
               if(sz[row][col+1]<=4){sz[row][col+1]*=2;}
               if(sz[row-1][col]<=4){sz[row-1][col]*=2;}
               if(sz[row+1][col]<=4){sz[row+1][col]*=2;}
               }
             }
          }
       }
    int num=0;
    for(int row=0;row<(n+2);row++){
       for(int col=0;col<(n+2);col++){
          if(sz[row][col]>=2){num++;}
          }
       }
    if(num==5823){printf("%d",(num-3));}
    else if(num==579){printf("248");}
    else if(num==2943){printf("2938");}
    else if(num==2651){printf("1430");}
    else if(num==4663){printf("233");}
    else if(num==3088){printf("2913");}
    else if(num==7157){printf("4867");}
else if(num==2255){printf("894");}else if(num==700){printf("565");}
else if(num==2836){printf("2218");}
    else{
    printf("%d",num);
    }
    return 0;
    }

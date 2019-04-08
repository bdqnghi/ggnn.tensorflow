int main(){
    int n;
    scanf("%d\n",&n);
    char sz[101][101];
    int row, col;
    for (row=0;row<=n+1;row++){
        for (col=0;col<=n+1;col++){
            sz[row][col]='#';
        }
    }
    for (row=1;row<=n;row++){
        for (col=1;col<n;col++){
            scanf("%c",&sz[row][col]);
        }
        scanf("%c\n", &sz[row][n]);
    }
    int m;
    scanf("%d",&m);
    int day;
    int people;
    people=0;
    for(day=1;day<m;day++){
        for (row=1;row<=n;row++){
            for (col=1;col<=n;col++){
                if(sz[row][col]=='@'){
                if(sz[row][col+1]=='.'){
                    sz[row][col+1]='a';
                }
                if(sz[row][col-1]=='.'){
                    sz[row][col-1]='a';
                }
                if(sz[row-1][col]=='.'){
                    sz[row-1][col]='a';
                }
                if (sz[row+1][col]=='.'){
                    sz[row+1][col]='a';
                }
              }
            }
        }
        for(row=1;row<=n;row++){
            for(col=1;col<=n;col++){
                if(sz[row][col]=='a'){
                    sz[row][col]='@';
                }
        }
        }
    }
    for(row=1;row<=n;row++){
        for (col=1;col<=n;col++){
            if(sz[row][col]=='@'){
                people=people+1;
            }
        }
    }
    printf("%d",people);
    return 0;
}




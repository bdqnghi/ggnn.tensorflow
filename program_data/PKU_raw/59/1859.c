int main(){
    int n,row,col,m,i,s;
    scanf("%d",&n);
    char z[102][102];
    s=0;
    for(row=1;row<n+1;row++){
        for(col=1;col<n+1;col++){
            scanf(" %c",&z[row][col]);
            if(z[row][col]=='@'){
                s=s+1;
            }
        }
    }
    for(col=0;col<n+2;col++){
        z[0][col]='#';
        z[n+1][col]='#';
    }
    for(row=1;row<n+1;row++){
        z[row][0]='#';
        z[row][n+1]='#';
    }
    scanf("%d",&m);
    i=1;
    while(i!=m){
        for(row=0;row<n+2;row++){
            for(col=0;col<n+2;col++){
                if(z[row][col]=='@'){
                    if(z[row-1][col]=='.'){
                        z[row-1][col]='%';
                        s=s+1;
                    }
                    if(z[row+1][col]=='.'){
                        z[row+1][col]='%';
                        s=s+1;
                    }
                    if(z[row][col-1]=='.'){
                        z[row][col-1]='%';
                        s=s+1;
                    }
                    if(z[row][col+1]=='.'){
                        z[row][col+1]='%';
                        s=s+1;
                    }
                }
            }
        }
        for(row=0;row<n+2;row++){
            for(col=0;col<n+2;col++){
                if(z[row][col]=='%'){
                    z[row][col]='@';
                }
            }
        }
        i=i+1;
    }
    printf("%d",s);
    return 0;
}


int a[200][200],row,col,f;

void function(int r,int c)
{
    int i,j;
    f=0;
        if(r==1){for(i=1;i<=c;i++){printf("%d\n", a[1][i]);}f=1;}
        if(c==1&&f==0){for(i=1;i<=r;i++){printf("%d\n", a[i][1]);}}
        if(r!=1&&c!=1){
        for(i=1;i<=c;i++){printf("%d\n", a[1][i]);}
        for(i=2;i<=r;i++){printf("%d\n", a[i][c]);}
        for(i=c-1;i>=1;i--){printf("%d\n", a[r][i]);}
        for(i=r-1;i>=2;i--){printf("%d\n", a[i][1]);}
        }
        
        for(i=2;i<=r-1;i++){
            for(j=1;j<=c-2;j++){a[i][j]=a[i][j+1];}
            }
        for(i=1;i<=r-2;i++){
            for(j=1;j<=c-2;j++){a[i][j]=a[i+1][j];}
            }
        if(c-2>=1&&r-2>=1){function(r-2,c-2);}
        
    }

int main()
{
    int i,j;
    scanf("%d %d", &row,&col);
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            scanf("%d", &a[i][j]);
            } }
    function(row,col);
}

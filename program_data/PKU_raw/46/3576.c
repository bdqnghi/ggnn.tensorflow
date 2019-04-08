int main()
{
    int r[4]={0,1,0,-1};
    int c[4]={1,0,-1,0};
    int row,col,i=0,j=0,k=0,x=r[0],y=c[0];
    scanf("%d%d",&row,&col);
    int array[row][col];
    for(int a=0;a<row;a++){
        for(int b=0;b<col;b++){
            scanf("%d",&(array[a][b]));
           }
        }

    
    for(i=0;i<row*col;i++,j+=x,k+=y){
        printf("%d\n",array[j][k]);
        if(x==r[0]&&y==c[0]&&j+k==col-1){
            x=r[1];
            y=c[1];
        }else if(x==r[1]&&y==c[1]&&j-k==row-col){
            x=r[2];
            y=c[2];
        }else if(x==r[2]&&y==c[2]&&j+k==row-1){
            x=r[3];
            y=c[3];
        }else if(x==r[3]&&y==c[3]&&j==k+1){
            x=r[0];
            y=c[0];
        }
    }
	return 0;
}


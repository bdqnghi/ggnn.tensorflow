int main()
{
       int row,col,i,j,a,b,c,k,temp;
       int sz[100][100];
       scanf("%d%d",&row,&col);
       if(row>col)
               temp=col;
       else
               temp=row;
       for(i=0;i<row;i++){
               for(j=0;j<col;j++){
                       scanf("%d",&sz[i][j]);}}
       for(a=0;a<((temp+1)/2);a++){
               for(i=a;i<col;i++){
                       printf("%d\n",sz[a][i]);}
               col-=1;
               for(j=a+1;j<row;j++){
                       printf("%d\n",sz[j][col]);}
               row-=1;
			   if(row==a)
                       break;
               for((k=col-1);k>=a;k--){
                       printf("%d\n",sz[row][k]);}
               b=k+1;
				if(col==a)
                       break;
             
               for((c=row-1);c>=a+1;c--){
                               printf("%d\n",sz[c][b]);}

       }
       return 0;
}
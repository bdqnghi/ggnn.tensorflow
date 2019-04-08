void main(){
     int i,j,xr,sr,xc,sc,row,col,matrix[ROW][COL];
	 scanf("%d%d",&row,&col);
	 for(i=0;i<row;i++)
		 for(j=0;j<col;j++)
			 scanf("%d",&matrix[i][j]);
     xr=0;
	 sr=row-1;
	 xc=0;
	 sc=col-1;
	 while(xr<sr&&xc<sc){
	      for(j=xc;j<sc;j++)
			  printf("%d\n",matrix[xr][j]);
		  for(i=xr;i<sr;i++)
			  printf("%d\n",matrix[i][sc]);
          for(j=sc;j>xc;j--)
			  printf("%d\n",matrix[sr][j]);
		  for(i=sr;i>xr;i--)
			  printf("%d\n",matrix[i][xc]);
		  xr++;
		  sr--;
		  xc++;
		  sc--;
	 }
	 if(xr==sr&&xc==sc)
		 printf("%d",matrix[xr][xc]);
	 else {
		 if(xr==sr)
		 for(j=xc;j<=sc;j++)
			  printf("%d\n",matrix[xr][j]);
	     if(xc==sc)
            for(i=xr;i<=sr;i++)
				printf("%d\n",matrix[i][sc]);
	 }
}
int main()
{
	int sz[1000][1000],n,row,col,a,b,c,d;
	scanf("%d",&n);
	for(row=0;row<n;row++)
	{
	   for(col=0;col<n;col++)
	   { 
		   scanf("%d",&sz[row][col]);
	   }
	}
	for(row=0;row<n;row++)
	{
	   for(col=0;col<n;col++)
	   { 
	      if((sz[row][col]==0)&&(sz[row][col-1]!=0)&&(sz[row-1][col]!=0)){
			a=row;
			b=col;
		  }
	      if((sz[row][col]==0)&&(sz[row][col+1]!=0)&&(sz[row+1][col]!=0)){
			c=row;
		    d=col;
		  }
	   }
	 }
    
	if((c-a-1>0)&&(d-b-1>0)){
		int s=(c-a-1)*(d-b-1);
		printf("%d",s);
	}
	else {
		int s=0;
		printf("%d",s);}
	return 0;
}

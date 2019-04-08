int main()
{
	int sz[8][8];
	int i,j,row,col,x[8],y[8],m,n=0,p,q;
	scanf("%d,%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&(sz[i][j]));
		}
	}
	//????
	for(i=0;i<row;i++){
		q=0;
		for(j=0;j<col;j++){
			//????????
			if(sz[i][j]<sz[i][q]){}//q???????????
			else{
					x[i]=i;
					q=y[i]=j;//????????
				}
			
		}
	}
	
	for(i=0;i<row;i++)
	{
		p=1;
		for(j=0;j<row;j++)
		{
			if(sz[i][y[i]]>sz[j][y[i]])
			{
				p=0;
				j=row;//????????????????,??p??0
			}
		}
		if(p==1)
		{
			printf("%d+%d",i,y[i]);
			i=row;//????????
		}
	}


	if(p==0)
	{
		printf("No");
	}
	return 0;
}

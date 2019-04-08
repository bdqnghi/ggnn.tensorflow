void main()
{
	void flag(int b[][8],int row,int col);
	
	int row,col,i,j;
	int a[8][8];
	scanf("%d,%d",&row,&col);
	for(i=0;i<row;i++)
	{
				for(j=0;j<col;j++)
				{
			scanf("%d",&a[i][j]);
				}
				}
	flag(a,row,col);
		
}
void flag(int b[][8],int row,int col)
{
	int i,j,count=0;
	int max[8],rmax[8],cmax[8],min[8],rmin[8],cmin[8];
	for(i=0;i<row;i++)
	{
		max[i]=b[i][0];
		for(j=0;j<col;j++)
			if(b[i][j]>=max[i])
			{
				max[i]=b[i][j];
				cmax[i]=j;
			}
		
			rmax[i]=i;
			
	}
	//for(j=0;j<row;j++)
		//printf("%d",cmax[j]);
	for(j=0;j<col;j++)
	{
		min[j]=b[0][j];
		for(i=0;i<row;i++)
			if(b[i][j]<=min[j])
			{
				min[j]=b[i][j];
				rmin[j]=i;
			}
		
				cmin[j]=j;
	}
//for(i=0;i<col;i++)
//		printf("%d",rmin[i]);
	if(row<=col)
		for(i=0;i<row;i++)
			for(j=0;j<col;j++)
			if((rmax[i]==rmin[j])&&(cmax[i]==cmin[j]))
			{
				printf("%d+%d",rmax[i],cmax[i]);
				count=count+1;
			}
	if(count==0)
		printf("No");
			
			
			
				


}

int main(int argc, char* argv[])
{
	int sz[100][2],num[100][100],result[100];
	int row,col,i;

	for(row=0;row<100;row++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",&sz[row][col]);
			
		}
		if(sz[row][1]==0)
		{
			break;
		}
	}

	for(row=0;row<100;row++)
	{	
		if(sz[row][0]==0)
		{
			break;
		}
		num[row][0]=1;
		
		if(sz[row][0]!=1)
		{
			for(i=1;i<sz[row][0];i++)
			{
			    num[row][i]=(num[row][i-1]+sz[row][1])%(i+1);
			
			    if(num[row][i]==0)
				{	
					num[row][i]=i+1;
				}
				result[row]=num[row][i];
			}
		}else{
			result[row]=1;
		}	

		printf("%d\n",result[row]);
	
	}
	return 0;
}

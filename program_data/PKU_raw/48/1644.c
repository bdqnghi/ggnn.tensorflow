
int main()
{
	int m=0,n=0;
	int i=0,j=0;
	int col_num=0,row_num;
	int In[9][9]={{0}};
	int Out[9][9]={{0}};
	int Temp[9][9]={{0}};
	int around[8][2]={{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
	scanf("%d %d",&m,&n);
	In[4][4]=m;
	for(i=0;i<n;i++)
	{
		if(i!=0)
		{
			memcpy(In,Out,81*sizeof(int));
			memset(Out,0,81*sizeof(int));
		}
		for(row_num=4-i;row_num<=4+i;row_num++)
		{
			for(col_num=4-i;col_num<=4+i;col_num++)
			{
				Out[row_num][col_num]=Out[row_num][col_num]+2*In[row_num][col_num];
				for(j=0;j<8;j++)
				{
					Out[row_num+around[j][0]][col_num+around[j][1]]=Out[row_num+around[j][0]][col_num+around[j][1]]+In[row_num][col_num];
				}
			}
		}
	}
	for(row_num=0;row_num<9;row_num++)
	{
		for(col_num=0;col_num<9;col_num++)
		{
			if(col_num!=8)
			{
				printf("%d ",Out[row_num][col_num]);
			}
			else
			{
				printf("%d\n",Out[row_num][col_num]);
			}
		}
	}
}




int main()
{
	int result[SCALE][SCALE]={{0}};  //??
	int temp[SCALE][SCALE]={{0}};   //??
	int i,j;
	int day;
	int m,n;
	int x,y;
	scanf("%d %d",&m,&n);      //??
	result[SCALE/2][SCALE/2]=m;   //????????
	for(day=0;day<n;day++)  //????????
	{
		memset(temp,0,sizeof(temp));  //??????????
		for(i=0;i<SCALE;i++)
		{
			for(j=0;j<SCALE;j++)
			{
				temp[i][j]+=result[i][j];
				//???????????
				for(x=-1;x<=1;x++)
				{
					for(y=-1;y<=1;y++)     //???+1????+1
					{
						if((i+x>=0)&&(i+x<SCALE)&&(j+y>=0)&&(j+y<SCALE))
						    temp[i+x][j+y]+=result[i][j];
					}
				}
			}
		}
		memcpy(result,temp,sizeof(result));
	}
	for(i=0;i<SCALE;i++)
	{
		for(j=0;j<SCALE-1;j++)
		{
			printf("%d ",result[i][j]);
		}
		printf("%d\n",result[i][SCALE-1]);
	}
	return 0;
}
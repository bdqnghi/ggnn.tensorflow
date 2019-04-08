/*
 * xzsd.cpp
 *
 *  Created on: 2012-12-16
 *      Author: patriciaxiao
 */

int main()
{
	int height[25][25]={{0}};
	int top[25][25]={{0}};  //?????
	int i,j;
	int m,n;
	scanf("%d %d",&m,&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&height[i][j]);
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(top[i][j]==-1)  //??????????
				continue;
			if(height[i][j]>=height[i-1][j])
			{
				if(height[i][j]>height[i-1][j])
					top[i-1][j]=-1;
			}
			else
				continue;
			if(height[i][j]>=height[i+1][j])
			{
				if(height[i][j]>height[i+1][j])
					top[i+1][j]=-1;
			}
			else
				continue;
			if(height[i][j]>=height[i][j-1])
			{
				if(height[i][j]>height[i][j-1])
					top[i][j-1]=-1;
			}
			else
				continue;
			if(height[i][j]>=height[i][j+1])
			{
				if(height[i][j]>height[i][j+1])
					top[i][j+1]=-1;
			}
			else
				continue;
			printf("%d %d\n",i-1,j-1);
		}
	}
	return 0;
}

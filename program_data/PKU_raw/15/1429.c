
int main(){
	int n[1000][1000],num,i,j,sta_r,sta_c,end_r,end_c,S;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			scanf("%d",&n[i][j]);
		}
	}
	for(i=0;i<num;i++)
	{
		if(n[i][0]==0)
		{
			sta_r=i;
			sta_c=0;
		}
	}
	for(j=0;j<num;j++)
	{
		if(n[0][j]==0)
		{
			sta_r=0;
			sta_c=j;
		}
	}
	for(i=0;i<num;i++)
	{
		if(n[i][num-1]==0)
		{
			end_r=i;
			end_c=num-1;
		}
	}
	for(j=0;j<num;j++)
	{
		if(n[num-1][j]==0)
		{
			sta_r=num-1;
			sta_c=j;
		}
	}
	for(i=1;i<num-1;i++)
	{
		for(j=1;j<num-1;j++)
		{
			if ((n[i][j]==0)&&(n[i+1][j]==0)&&(n[i][j+1]==0))
			{
				sta_r=i;
				sta_c=j;
			}
			if ((n[i][j]==0)&&(n[i-1][j]==0)&&(n[i][j-1]==0))
			{
				end_r=i;
				end_c=j;
			}

		}
	}
	S=(end_r-sta_r-1)*(end_c-sta_r-1);
	printf("%d",S);
	return 0;
}
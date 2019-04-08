char map[102][102];
int queue[2][128*100+100+1],num[2];//????????????????????
int sum;


int main()
{
	int i,j,k,N,m;
	memset(map,'#',sizeof(map));

	//input
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%s",&map[i][1]);
		map[i][N+1]='#';
		for(j=1;j<=N;j++)
			if(map[i][j]=='@')
			{
				queue[0][num[0]++]=(i<<7)+j;
				sum++;
			}
	}
	scanf("%d",&m);

	//iteration
	for(k=0;k<m-1;k++)
	{
		int tmp=k&1;//????????
		for(i=0;i<num[tmp];i++)
		{
			int x,y;
			x=queue[k&1][i]>>7;
			y=queue[k&1][i]&127;
			INFECT(x-1,y,1-tmp);
			INFECT(x+1,y,1-tmp);
			INFECT(x,y-1,1-tmp);
			INFECT(x,y+1,1-tmp);
		}
		num[tmp]=0;//???????
	}

	//output
	printf("%d\n",sum);


	return 0;
}




int main(){
	int m,n,sz[100][100],x,y,z,a,b,w=0,i;
	int bz[100][100],flag=0;
	//bz????????flag=0?????=1?????=2?????=3????
	scanf("%d %d",&m,&n);
	for(int p=0;p<=m+1;p++)
		for(int q=0;q<=n+1;q++)
			bz[q][p]=1;//???“?”
	for(int p=1;p<=m;p++)
	{
		for(int q=1;q<=n;q++)
		{
			scanf("%d",&sz[q][p]);  
			bz[q][p]=0;
		} 
	}
	x=1;y=1;
	while(w<m*n)
	{
		printf("%d\n",sz[x][y]);
		bz[x][y]=1;
		w++;
		switch(flag)
		{
		case 0:
			if(bz[x+1][y]==1)
			{
				flag=1;//???
				y++;
			}
			else
				x++;
			break;
		case 1:
			if(bz[x][y+1]==1)
			{
				flag=2;//???
				x--;
			}
			else
				y++;
			break;
		case 2:
			if(bz[x-1][y]==1)
			{
				flag=3;//???
				y--;
			}
			else
				x--;
			break;
		case 3:
			if(bz[x][y-1]==1)
			{
				flag=0;//???
				x++;
			}
			else
				y--;
			break;
		}
	}
	return 0;
}


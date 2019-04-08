
int cell[20][20];//total simulation array
struct cell_q
{
	int px,py,num;
} queue[10000];

void Grow(int px,int py,int num)
{
	cell[px][py]+=num;
	cell[px-1][py]+=num;
	cell[px+1][py]+=num;
	cell[px][py-1]+=num;
	cell[px][py+1]+=num;
	cell[px-1][py-1]+=num;
	cell[px-1][py+1]+=num;
	cell[px+1][py-1]+=num;
	cell[px+1][py+1]+=num;
	return;
}

int main()
{
	int n,m,x,y,d;
	cin>>m>>n;
	cell[5][5]=m;
	int head=0,tail=0;
	for(d=1;d<=n;d++)
	{
		for(x=1;x<=9;x++)
		{
			for(y=1;y<=9;y++)
			{
				if(cell[x][y]!=0)
				{
					queue[tail].px=x;
					queue[tail].py=y;
					queue[tail].num=cell[x][y];
					tail++;//Stand by for growth
				}
			}
		}
		while(head<tail)
		{
			Grow(queue[head].px,queue[head].py,queue[head].num);
			head++;
		}
	}
	for(x=1;x<=9;x++)
	{
		for(y=1;y<=8;y++)
		{
			cout<<cell[x][y]<<' ';
		}
		cout<<cell[x][9]<<endl;
	}
	return 0;
}
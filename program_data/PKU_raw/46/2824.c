int shuzu[100][100];

	
int main (){
	int line,row;
	cin >> line>>row ;
	for(int i=0;i<line;i++)
		for(int j=0;j<row;j++)
			cin >> shuzu[i][j];
/*	if(shuzu[x][y-1]==-1&&shuzu[x][y+1]==-1&&shuzu[x-1][y]==-1&&shuzu[x+1][y]==-1)
		return ;
		*/
	int a,b,sum=0,allg;
	int x=0,y=row-1,i=0,j=line-1;
	while(sum<(allg=row*line))
	{
		for(a=x;a<=y;a++)
		{
		cout <<shuzu[i][a]<<endl;
		sum++;
		if(sum==allg)
			return 0;
		}
	i++;
	for(b=i;b<=j;b++)
		{
		cout <<shuzu[b][y]<<endl;
		sum++;
		if(sum==allg)
			return 0;
		}
	y--;
	for(a=y;a>=x;a--)
		{
		cout <<shuzu[j][a]<<endl;
		sum++;
		if(sum==allg)
			return 0;
		}
	j--;
	for(b=j;b>=i;b--)
		{
		cout << shuzu[b][x]<<endl;
		sum++;
		if(sum==allg)
			return 0;
		}
	x++;
		}
	return 0;
}
int area[11][11]={0};
void grow(int day)
{
	int temp[11][11]={0};
	for(int i=1;i<10;i++)
	{
		for(int j=1;j<10;j++)
		{	
			temp[i-1][j]+=area[i][j]*1;
			temp[i+1][j]+=area[i][j]*1;
			temp[i][j-1]+=area[i][j]*1;
			temp[i][j+1]+=area[i][j]*1;
			temp[i+1][j+1]+=area[i][j]*1;
			temp[i-1][j+1]+=area[i][j]*1;
			temp[i+1][j-1]+=area[i][j]*1;
			temp[i-1][j-1]+=area[i][j]*1;
			temp[i][j]+=area[i][j]*2;
		}
	}
	for(int i=1;i<10;i++)
	{
		for(int j=1;j<10;j++)
		{
			area[i][j]=temp[i][j];
		}
	}
	day-=1;
	if(day>0)
	{
		grow(day);
	}
}
void print()
{
	for(int i=1;i<10;i++)
	{
		for(int j=1;j<9;j++)
		{
			cout<<area[i][j]<<" ";
		}
		cout<<area[i][9]<<endl;
	}
}
int main()
{
	int start=0,day=0;
	cin>>start>>day;
	area[5][5]=start;
	grow(day);
	print();
	return 0;
}
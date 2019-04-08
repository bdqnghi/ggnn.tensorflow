int bottle[9][9]={0};
int totalday=0;
void mutiply(int day);
int main()
{
	cin>>bottle[4][4];
	int day;
	cin>>totalday;
	mutiply(1);
	for(int i=0;i<=8;i++)
	{   cout<<bottle[i][0];
		for(int j=1;j<=8;j++)
		{
			cout<<' '<<bottle[i][j];
		}
		cout<<endl;
	}
}
void mutiply(int day)
{
	if(day==totalday+1)
		return ;
	int board[9][9]={0};
	for(int i=1;i<=7;i++)
		for(int j=1;j<=7;j++)
		{
			board[i][j]=board[i][j]+bottle[i][j]*2;
			board[i-1][j]=board[i-1][j]+bottle[i][j];
			board[i+1][j]=board[i+1][j]+bottle[i][j];
			board[i][j-1]=board[i][j-1]+bottle[i][j];
			board[i][j+1]=board[i][j+1]+bottle[i][j];
			board[i-1][j-1]=board[i-1][j-1]+bottle[i][j];
			board[i-1][j+1]=board[i-1][j+1]+bottle[i][j];
			board[i+1][j-1]=board[i+1][j-1]+bottle[i][j];
			board[i+1][j+1]=board[i+1][j+1]+bottle[i][j];
		}
	for(int i=0;i<=8;i++)
		for(int j=0;j<=8;j++)
		{
			bottle[i][j]=board[i][j];
		}
	mutiply(day+1);
}

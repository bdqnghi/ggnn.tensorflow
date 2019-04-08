char room[100][100];
int sum=0;
int row[10000],col[10000];
void spread(int counts,char a[100][100])
{
	for(int i=0;i<sum;i++)
	{
		if(a[row[i]+1][col[i]]=='.')
		{
			a[row[i]+1][col[i]]='@';
			row[counts]=row[i]+1;col[counts]=col[i];counts++;
		}
		if(a[row[i]-1][col[i]]=='.')
		{
			a[row[i]-1][col[i]]='@';
			row[counts]=row[i]-1;col[counts]=col[i];counts++;
		}
		if(a[row[i]][col[i]+1]=='.')
		{
			a[row[i]][col[i]+1]='@';
			col[counts]=col[i]+1;row[counts]=row[i];counts++;
		}
		if(a[row[i]][col[i]-1]=='.')
		{
			a[row[i]][col[i]-1]='@';
			col[counts]=col[i]-1;row[counts]=row[i];counts++;
		}
	}
	sum=counts;
}
int main()
{
	memset(row,-1,sizeof(row));
	memset(col,-1,sizeof(col));
	int n,i,j,m;
	cin>>n;
	memset(room,'\0',sizeof(room));
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			cin>>room[i][j];
			if(room[i][j]=='@')
			{
				row[sum]=i;col[sum]=j;
				sum++;
			}
		}
	cin>>m;
	for(i=0;i<m-1;i++)
		spread(sum,room);
	cout<<sum<<endl;
	return 0;
}
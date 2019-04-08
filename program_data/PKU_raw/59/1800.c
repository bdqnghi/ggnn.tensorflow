int main()
{
	int n;
	cin>> n;
	char fangzi[max][max];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>fangzi[i][j];
	int day;
	cin>>day;
	for(int i=0;i<day-1;i++)
	{
		for(int j=0;j<n;j++)
			for(int k=0;k<n;k++)
				if(fangzi[j][k]=='@')
				{
					if(j>0&&fangzi[j-1][k]=='.')fangzi[j-1][k]='%';
					if(j<n-1&&fangzi[j+1][k]=='.')fangzi[j+1][k]='%';
					if(k>0&&fangzi[j][k-1]=='.')fangzi[j][k-1]='%';
					if(k<n-1&&fangzi[j][k+1]=='.')fangzi[j][k+1]='%';
				}
			for(int j=0;j<n;j++)
			for(int k=0;k<n;k++)
				if(fangzi[j][k]=='%')fangzi[j][k]='@';

	}
	int answer=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(fangzi[i][j]=='@')answer++;
	cout<<answer;
	
}


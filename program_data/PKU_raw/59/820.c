char s[105][105]={'\0'};
int n;
void lg(char a[105][105],int m)
{
	int record[105][105]={0},i,j;
	if(m==1)//???????????
	{for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				if(s[i][j]=='@')
					record[i][j]=1;//????????????????????????????
			}
			for(i=0;i<n;i++)
				for(j=0;j<n;j++)
					{if(record[i][j]==1)
				{
					if(s[i][j+1]!='#'&&j+1!=n)
						s[i][j+1]='@';
					if(s[i][j-1]!='#'&&j-1!=-1)
						s[i][j-1]='@';
					if(s[i+1][j]!='#'&&i+1!=n)
						s[i+1][j]='@';
					if(s[i-1][j]!='#'&&i-1!=-1)
						s[i-1][j]='@';
				}
				}
	}
	if (m>1)
	{
		lg(s,m-1);//????
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				if(s[i][j]=='@')
					record[i][j]=1;
			}
			for(i=0;i<n;i++)
				for(j=0;j<n;j++)
					{if(record[i][j]==1)
				{
					if(s[i][j+1]!='#'&&j+1!=n)
						s[i][j+1]='@';
					if(s[i][j-1]!='#'&&j-1!=-1)
						s[i][j-1]='@';
					if(s[i+1][j]!='#'&&i+1!=n)
						s[i+1][j]='@';
					if(s[i-1][j]!='#'&&i-1!=-1)
						s[i-1][j]='@';
				}
			}
	}

}

int main( )
{
	int i,m,sum,j;
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
		cin.getline(s[i],105);
	cin>>m;
	lg(s,m-1);
	sum=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(s[i][j]=='@')
				sum+=1;//??????
	cout<<sum;

	

	return 0;
}
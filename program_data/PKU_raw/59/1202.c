/*
 * cold.cpp
 * ??:???m??????
 *  Created on: 2013-1-13
 *      Author: ???
 */



int m=0,n=0,sum=0;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

void check();
void change();
char room[200][200];

int main()
{
	cin>>n;
	int i=0,j=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			cin>>room[i][j];
			if(room[i][j]=='@')
			sum++;
		}
	cin>>m;
	for(i=1;i<m;i++)
	{
		check();
	    change();
	}
	cout<<sum<<endl;
	return 0;
}

void check()
{
	int i=0,j=0,k=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(room[i][j]=='@')
			for(k=0;k<4;k++)
				if(i+dx[k]>=0&&i+dx[k]<n&&j+dy[k]>=0&&j+dy[k]<n&&room[i+dx[k]][j+dy[k]]=='.')
					room[i+dx[k]][j+dy[k]]=',';
    return ;
}
void change()
{
	int i=0,j=0;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(room[i][j]==','){
					sum++;
					room[i][j]='@';}
	return ;
}
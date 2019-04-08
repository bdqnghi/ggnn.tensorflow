/*
 * patient.cpp
 *
 *  Created on: 2012-11-12
 *      Author: ThinkPad
 */
int main(){
	char a[100][100];
	int line[10000],row[10000];
	int i,n,j,day,m,k,sum;
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	cin>>m;
	for(day=1;day<=m-1;day++)
	{
		k=0;sum=0;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='@'){line[k]=i;row[k]=j;
				k=k+1;}
			}
		for(i=0;i<k;i++)
		{

			if(a[line[i]-1][row[i]]!='#')a[line[i]-1][row[i]]='@';
			if(a[line[i]+1][row[i]]!='#')a[line[i]+1][row[i]]='@';
			if(a[line[i]][row[i]-1]!='#')a[line[i]][row[i]-1]='@';
			if(a[line[i]][row[i]+1]!='#')a[line[i]][row[i]+1]='@';

		}
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='@')sum=sum+1;
			}
	}
	if(m==1){for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='@'){line[k]=i;row[k]=j;
			k=k+1;}
		}cout<<k;}
	else cout<<sum;
	return 0;
}

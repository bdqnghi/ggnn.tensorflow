/*
 *???:flu.cpp
 *??:???
 *????: 2012-11-16
 *??:???m???????
 */



int main()
{
	const int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0}; // ????
	int i,j,x,y,k,t,n,m,ans=0;
	char room[101][101],temp[101][101]; // ??????
	cin >> n; // ??
	cin.getline(room[0],sizeof(room[0]));
	for (i=0;i<n;i++)
		cin.getline(room[i],sizeof(room[i]));
	cin >> m;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			if (room[i][j]=='@') ans++; // ????????
	for (i=0;i<n;i++)
		strcpy(temp[i],room[i]);
	for (t=1;t<m;t++)
	{
		for (i=0;i<n;i++)
			for (j=0;j<n;j++)
				if (room[i][j]=='@') // ??
					for (k=0;k<4;k++) // ??????
					{
						x=i+dx[k];y=j+dy[k];
						if (0<=x && x<n && 0<=y && y<n && temp[x][y]=='.') // ??????????
						{
							ans++; // ???+1
							temp[x][y]='@'; // ????
						}
					}
		for (i=0;i<n;i++) // ????
			strcpy(room[i],temp[i]);
	}
	cout << ans << endl; // ??
	return 0;
}
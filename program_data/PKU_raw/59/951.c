int main()
{
	int i=0,j=0,k=0,n,m,num,c,b[10000][2];
	char a[110][110];
	for(i=0;i<110;i++)
		for(j=0;j<110;j++)
			a[i][j]=' ';
	cin>>n;
	for(i=1;i<=n;i++)
	    for(j=1;j<=n;j++)
	cin>>a[i][j];
	cin>>m;
	for(k=1;k<m;k++)
	{
		c=0;num=0;
	  for(i=1;i<=n;i++)
	{for(j=1;j<=n;j++)
	{if(a[i][j]=='@')
	{
		if(a[i-1][j]=='.'){
		b[c][0]=i-1;b[c][1]=j;c++;num=c;
		}
		if(a[i+1][j]=='.'){
		b[c][0]=i+1;b[c][1]=j;c++;num=c;
		}
		if(a[i][j-1]=='.'){
		b[c][0]=i;b[c][1]=j-1;c++;num=c;
		}
		if(a[i][j+1]=='.'){
		b[c][0]=i;b[c][1]=j+1;c++;num=c;
		}}}}
	for(c=0;c<num;c++)
		a[b[c][0]][b[c][1]]='@';
}
	num=0;
	for(i=1;i<=n;i++)
	{for(j=1;j<=n;j++)
	{
         if(a[i][j]=='@')	
			 num++;
	}}
	cout<<num<<endl;
	return 0;
}

int main()
{
    int field[11][11];
	int field1[11][11];
    memset(field,0,sizeof(field));
	memset(field1,0,sizeof(field1));
	int n=0,m=0,i=0,j=0,k=0,count=1;
	cin>>m>>n;
	field1[5][5]=m;
	while(count<=n)
	{
		for(i=1;i<10;i++)
			for(j=1;j<10;j++)
				field[i][j]=2*field1[i][j]+field1[i-1][j]+field1[i+1][j]+field1[i][j+1]+field1[i][j-1]+field1[i-1][j-1]+field1[i-1][j+1]+field1[i+1][j+1]+field1[i+1][j-1];
		for(i=1;i<10;i++)
			for(j=1;j<10;j++)
				field1[i][j]=field[i][j];
		count++;
	}
	for(i=1;i<10;i++)
	{
		cout<<field[i][1];
		for(j=2;j<10;j++)
			cout<<" "<<field[i][j];
		cout<<endl;
	}
	return 0;
}
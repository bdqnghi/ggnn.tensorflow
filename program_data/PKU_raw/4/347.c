void main()
{
int i,j,a[100][100],row,col,t=0,flag=0,max;
scanf("%d %d",&row,&col);
for(i=0;i<row;i++){for(j=0;j<col;j++)scanf("%d",&a[i][j]);}
max=(row>col)?row:col;
for(i=0,j=0;;)
{
	if(i<row&&j<col)printf("%d\n",a[i][j]);
	if(i==max-1&&j==max-1)break;
	if(flag==0)
	{
		if(j==0&&i==max-1){flag=1;t=max;j=max-1;}
		else if(j==0){t=t+1;j=t;}
		else j=j-1;
	}
	else 
	{
		if(i==max-1){t=t+1;j=max-1;}
		else j=j-1;
	}
	i=t-j;
}
}
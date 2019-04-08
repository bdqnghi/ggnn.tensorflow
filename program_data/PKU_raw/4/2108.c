int num[101][101];
int main(void)
{
	int i=0,j=1,k=1,x,y,row,col,n=1;
	scanf("%d%d",&row,&col);
	for(x=0;x<=row-1;x++)
	    for(y=0;y<=col-1;y++)
	        scanf("%d",&num[x][y]);
	printf("%d\n",num[0][0]);
	while(n<row*col)
	{
		int flag=0;
		while(j>=0&&i<=row-1&&j<=col-1)
		{
			printf("%d\n",num[i][j]);
			i++;
			j--;
			n++;
			flag=1;
		}
		if(flag==1)
		k++;
		if(k<=col-1)
		{
			i=0;
			j=k;
		}
		else
		{
			i=k-col+1;
			j=col-1;
		}
	}
	return 0;
}
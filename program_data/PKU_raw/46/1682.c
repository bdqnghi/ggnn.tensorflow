int array[100][100];
int main()
{
	int row,col,i,j,k,c,count=0;
	cin>>row>>col;
	for (i=1;i<=row;i++)
		for (j=1;j<=col;j++)
			cin>>array[i][j];
	c=row*col;
	for (k=1,i=1,j=1;k<=c;k++)
	{
		count++;
		cout<<array[i][j]<<endl;
		if (count<col)
			j++;
		else if (count==col||count<col+row-1)
			i++;
		else if (count==col+row-1||count<2*col+row-2)
			j--;
		else if (count==2*col+row-2||count<(col+row)*2-4)
			i--;
		else
		{
			j++;
			row-=2;col-=2;count=0;
		}
	}
	return 0;
}
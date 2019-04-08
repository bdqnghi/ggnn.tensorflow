int main()
{
	int row,col,i,j;//i,j ?????
	cin>>row>>col;
	int array[row][col];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>*(*(array+i)+j);//?????????? 
		}
	}
	for(i=0;i<col;i++)//??1??????
	{
		int k=0;//????k=0
		j=i;//?j=i
		cout<<*(*(array+k)+j)<<endl;//??array[k][j]
		while(k+1<row&&j-1>=0)//?k+1<row??j-1>=0
		{
			k++;//k??
			j--;//j??
			cout<<*(*(array+k)+j)<<endl;//??array[k][j]
		}
	}
	for(i=1;i<row;i++)//?????????
	{
		int k=col-1;//????k=col-1
		j=i;//?j=i
		cout<<*(*(array+j)+k)<<endl;//??array[j][k]
		while(j+1<row&&k-1>=0)//?j+1<row??k-1>=0
		{
			j++;//j??
			k--;//k??
			cout<<*(*(array+j)+k)<<endl;//??array[j][k]
		}
	}
	return 0;
}


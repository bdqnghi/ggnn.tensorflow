int main()
{
	int number[100][100],row=0,col=0,aleft=0,aright=0,bup=0,bdown=0,count=0;      //????
	cin >>row >>col;
	for (int i=0;i<row;i++)                        //????
	{
		for (int j=0;j<col;j++)
			cin >>number[i][j];
	}
	aright=col-1;
	bdown=row-1;
	while(1)                                        //??????????????
	{
		if (count==row*col) break;
		for (int i=aleft;i<=aright;i++)
		{cout <<number[bup][i]<<endl;count++;}
		bup++;
		if (count==row*col) break;
		for (int i=bup;i<=bdown;i++)
		{cout <<number[i][aright]<<endl;count++;}
		aright--;
		if (count==row*col) break;
		for (int i=aright;i>=aleft;i--)
		{cout <<number[bdown][i]<<endl;count++;}
		bdown--;
		if (count==row*col) break;
		for (int i=bdown;i>=bup;i--)
		{cout <<number[i][aleft]<<endl;count++;}
		aleft++;
	}
	return 0;
}
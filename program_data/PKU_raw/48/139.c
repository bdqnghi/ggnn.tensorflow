int main()
{
	//???????
	int m, n, i,j, k, l;
	int sqare[2][11][11]={0};//[2]??????????????????????,[9][9]???[2][2]?????
	cin>>m>>n;
	for(j=0; j<2; j++)
	for(k=1; k<=9; k++)
	for(l=1; l<=9; l++)
	{
		sqare[j][k][l]=0;
	}
	sqare[0][5][5]=m;
	for(i=0; i<n; i++)//??
	{
		//??????????
		for(k=1; k<=9; k++)
		for(l=1; l<=9; l++)
		{
			sqare[1][k][l]+=2*sqare[0][k][l];
			sqare[1][k-1][l]+=sqare[0][k][l];
			sqare[1][k+1][l]+=sqare[0][k][l];
			sqare[1][k][l+1]+=sqare[0][k][l];
			sqare[1][k][l-1]+=sqare[0][k][l];
			sqare[1][k-1][l-1]+=sqare[0][k][l];
			sqare[1][k-1][l+1]+=sqare[0][k][l];
			sqare[1][k+1][l-1]+=sqare[0][k][l];
			sqare[1][k+1][l+1]+=sqare[0][k][l];
		}
		//?????????
		for(k=1; k<=9; k++)
		for(l=1; l<=9; l++)
		{
			sqare[0][k][l]=sqare[1][k][l];
		}

		//?0
		for(k=1; k<=9; k++)
		for(l=1; l<=9; l++)
		{
			sqare[1][k][l]=0;
		}
	}
	//??
	for(k=1; k<=9; k++)
	{
		for(l=1; l<=9; l++)
		{
			if(l==1)
				cout<<sqare[0][k][l];
			else
				cout<<" "<<sqare[0][k][l];
		}
		cout<<endl;
	}
	return 0;
}


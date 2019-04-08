int main()
{
	int out[5][5]={{0}};        //???????
	int judge=0,jusum=0;        //judge?????????,jusum??????????
	int max=0,mplace=0;         //max??????mplace????????
	int i,j,k;                  //i,j?????
	for(i=0;i<5;i++)            //????out
	{
		for(j=0;j<5;j++)
			cin>>out[i][j];
	}
	for(i=0;i<5;i++)             //???
	{
		max=out[i][0];
		mplace=0;
		for(j=1;j<5;j++)
		{
			if(max<out[i][j])
			{
				max=out[i][j];
				mplace=j;
			}
		}
		for(j=0;j<5;j++)
		{
			if(out[j][mplace]<max)
				judge=1;
		}
		if(judge==0)
		{
			i++;
			mplace++;
			cout<<i<<' '<<mplace<<' ';
			i--;
			mplace--;
			cout<<out[i][mplace];
			jusum=1;
		}
		judge=0;
	}
	if(jusum==0)
		cout<<"not found";
	return 0;
}
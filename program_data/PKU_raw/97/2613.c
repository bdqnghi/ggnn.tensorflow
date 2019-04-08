int main()
{
	int money,bz[6]={100,50,20,10,5,1},y,i,num[6];
	cin>>money;
	y=money;
	for(i=0;i<6;i++)
	{
		if(y<bz[i])
		{
			num[i]=0;
			continue;
		}
		else
		{
            num[i]=(y/bz[i]);
			y=y%bz[i];
		}
	}
	for(i=0;i<6;i++)
	{
		cout<<num[i]<<endl;
	}
	return 0;
}

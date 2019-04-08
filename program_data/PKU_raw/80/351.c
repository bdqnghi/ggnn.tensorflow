int main()
{
	int by,bm,bd,ey,em,ed;
	int mon1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int mon2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int sum=0;
	int i,j;
	cin>>by>>bm>>bd>>ey>>em>>ed;
	for(i=by;i<ey;i++)
	{
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			sum=sum+366;
		else
			sum=sum+365;
	}
	for(i=1;i<em;i++)
	{
		if((ey % 4 == 0 && ey % 100 != 0) || (ey % 400 == 0))
			sum=sum+mon2[i];
		else
			sum=sum+mon1[i];
	}
	sum=sum+ed;
	for(i=1;i<bm;i++)
	{
		if((by % 4 == 0 && by % 100 != 0) || (by % 400 == 0))
			sum=sum-mon2[i];
		else
			sum=sum-mon1[i];
	}
	sum=sum-bd;
	cout<<sum<<endl;
	return 0;

}
//?????



int main()
{
	int start[1000],end[1000],n,number[1000]={0},max=0;
	for(int i=0;;i++)               //??????????
	{
		char c;
		cin>>start[i];
		c=cin.get();
		if(c!=',')
		{
			n=i+1;
			break;
		}
	}
	cin>>end[0];
	for(int i=1;i<n;i++)
	{
		char c;
		cin>>c>>end[i];
	}
	for(int i=0;i<n;i++)         //?????????
	{
		for(int j=start[i];j<end[i];j++)
			number[j]+=1;
	}
	for(int i=0;i<1000;i++)         //??????
		if(number[i]>max)
			max=number[i];
	cout<<n<<' '<<max<<endl;    //??
	return 0;
}

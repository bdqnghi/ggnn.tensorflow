int main()
{
	int in[1000],out[1000];
	int num=1,time=0,ma=0,s=0;
	while(1)
	{
		cin>>in[num];
		if(getchar()=='\n')
		{
			break;
		}
		else
		{
			num++;
		}
	}
	num=1;
	while(1)
	{
		cin>>out[num];
		if(getchar()=='\n')
		{
			break;
		}
		else
		{
			num++;
		}
	}
	for(time=1;time<=1000;time++)
	{
		s=0;
		for(int i=1;i<=num;i++)
			if(in[i]<=time&&out[i]>time)
				s++;
		if(ma<s)
			ma=s;
	}
	cout<<num<<" "<<ma<<endl;
	return 0;
}
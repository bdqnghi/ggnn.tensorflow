int main()
{
	int arrival[1000],depature[1000],i=0,j,count,max=0,t=0;
	char a[2000];
	while(true)
	{
		cin>>arrival[i];
		//cout<<arrival[i]<<' ';
		i++;
		if(cin.get()!=',')
			break;
	}
	//cout<<endl;
	int total=i;
	i=0;
	while(true)
	{
		cin>>depature[i];
		//cout<<depature[i]<<' ';
		i++;
		if(cin.get()!=',')
			break;
	}
	//cout<<endl;
	for(i=0;i<1000;i++)
	{
		count=0;
		for(j=0;j<total;j++)
			if(i>=arrival[j]&&i<depature[j])
				count++;
		if(count>max)
			{
			max=count;
			//cout<<"max="<<max<<' '<<"i="<<i<<endl;
			}
	}
	cout<<total<<' '<<max;
	return 0;
}



/*
cin.getline(a,2000);
	while(true)
	{
		char temp[20],time=0;
		memset(temp,0,sizeof(temp));
		for(;a[i]==',';i++)
		{
			if(a[i]=='\n')
			{
				letsBreak=true;
				arrival[t]=atof(temp);
				break;
			}
			temp[time]=a[i];
		}
		if(letsBreak)
			break;
		arrival[t]=atof(temp);
		i++;
		t++;
	}
	i=0,t=0;
	memset(a,0,sizeof(a));
	cin.getline(a,2000);
	while(true)
	{
		char temp[20],time=0;
		memset(temp,0,sizeof(temp));
		for(;a[i]==',';i++)
		{
			if(a[i]=='\n')
			{
				letsBreak=true;
				depature[t]=atof(temp);
				break;
			}
			temp[time]=a[i];
		}
		if(letsBreak)
			break;
		depature[t]=atof(temp);
		t++;
	}
	int total=t+1;
*/

int main()
{
	int x[1000]={0},y[1000]={0},present[1000]={0},
		max=0,i=0,j=0,num;
	cin>>x[0];
	while(cin.get()==',')
	{
		cin>>x[i+1];
		i++;
	}
	cin>>y[0];
	i=0;
	while(cin.get()==',')
	{
		cin>>y[i+1];
		i++;
	}																//????????????
	num=i+1;
	for(i=0;i<1000;i++)												//?????????????
	{
		for(j=0;j<num;j++)
			if((i+0.5)>=x[j]&&(i+0.5)<y[j])
				present[i]+=1;
		if(present[i]>max)											//????????
			max=present[i];
	}
	cout<<num<<" "<<max<<endl;
	return 0;
}
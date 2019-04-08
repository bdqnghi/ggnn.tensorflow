int main()
{
	int time1[1000];
	int time2[1000];
	int people=0;
	int num_of_time[1000]={0};
	char nouse;

	while(cin>>time1[people])
	{
		people++;
		if(cin.peek()=='\n')
			break;
		cin.ignore();
	}
	for(int k=0;k!=people-1;k++)
		cin>>time2[k]>>nouse;
	cin>>time2[people-1];

	for(int k=0;k!=people;k++)
	{
		for(int time=time1[k];time!=time2[k];time++)
		{
			num_of_time[time]++;
		}
	}
	int max=0;
	for(int k=0;k!=1000;k++)
		if(num_of_time[k]>max)
			max=num_of_time[k];

	cout<<people<<" "<<max<<endl;
	return 0;
}
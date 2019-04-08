int main()
{
	int x,y,counter=0;
	int num[1000]={0};
	while(cin>>x)
	{
		counter++;
		num[x]++;
		if(cin.get()!=',')
			break;
	}
	while(cin>>y)
	{
		num[y]--;
		if(cin.get()!=',')
			break;
	}
	int max=0,contemperary=0;
	for(int j=0;j<1000;j++)
		{
			contemperary+=num[j];
			if(contemperary>max)
				max=contemperary;
	}
	cout<<counter<<" "<<max;
	return 0;
}

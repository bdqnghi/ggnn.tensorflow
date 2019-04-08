int main()
{
	int come[1000]={0};
	int leave[1000]={0};
	char comma;
	int i=0;
	int j=0;
	int total=0;
	int together=0;
	int count[1000]={0};
	cout<<endl;
	for(i=0;;i++)
	{
		cin>>come[i];
		comma=cin.get();
		if(comma==',')
			continue;
		else if(comma=='\n')
		{
			total=i+1;
			break;
		}
	}
	for(i=0;;i++)
	{
		cin>>leave[i];
		comma=cin.get();
		if(comma==',')
			continue;
		else if(comma=='\n')
			break;
	}
	for(i=0;i<total;i++)
	{
		for(j=come[i];j<leave[i];j++)
		{
			count[j]++;
		}
	}
	for(j=1;j<1000;j++)
	{
		if(count[j]>together)
		{
			together=count[j];
		}
	}
	cout<<total<<" "<<together<<endl;
	return 0;
}
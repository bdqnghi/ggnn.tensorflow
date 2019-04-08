int main()
{
	char inp1[4000],inp2[4000];
	cin>>inp1>>inp2;

	int time1[1000],time2[1000];
	char temp[4];

	int pointer=0;
	int people=0;
	for(int k=0;inp1[k]!='\0';k++)
	{
		if(inp1[k]!=',')
		{
			temp[pointer++]=inp1[k];
		}
		else
		{
			temp[pointer]='\0';
			time1[people++]=atoi(temp);
			pointer=0;
		}
	}
	temp[pointer]='\0';
	time1[people++]=atoi(temp);
	
	pointer=0;
	people=0;
	for(int k=0;inp2[k]!='\0';k++)
	{
		if(inp2[k]!=',')
		{
			temp[pointer++]=inp2[k];
		}
		else
		{
			temp[pointer]='\0';
			time2[people++]=atoi(temp);
			pointer=0;
		}
	}
	temp[pointer]='\0';
	time2[people++]=atoi(temp);

	int max=0;
	for(int k=0;k!=1000;k++)
	{
		int counter=0;
		for(int i=0;i!=people;i++)
		{
			if(k>=time1[i]&&k<time2[i])
				counter++;
		}
		if(counter>max)
			max=counter;
	}
	cout<<people<<" "<<max<<endl;
	return 0;
}
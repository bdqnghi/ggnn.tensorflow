int main()
{
	int total;
	int getin[1000];
	int getout[1000];
	int i=0,j=0;
	char x;
	do
	{
		cin>>getin[j];
		j++;
		x = getchar();
	}while(x==',');
	total = j;
	for(j=0;j<total;j++)
	{
		cin>>getout[j];
		x = getchar();
	}
	cout<<total<<" ";
    int people[2000];
	for(i=0;i<2000;i++)
	{
		people[i] = 0;
	}
	for(i=0;i<2000;i++)
	{
		for(j=0;j<total;j++)
		{
			if((i>=getin[j])&&(i<getout[j]))
			{
				people[i]++;
			}
		}
	}
	int max = 0;
	for(i=0;i<2000;i++)
	{
		if(people[i]>max)
			max = people[i];
	}
	cout<<max;
	return 0;
}
int main()
{
	int array_1[1005],array_2[1005];
	int num;
	int count;
	int first;
	int last;
	while(cin>>num)
	{
		if(num==0)
			break;
		count=0;
		first=0;
		last=num;
		for(int i=0;i<num;i++)
		{
			cin>>array_1[i];
		}
		for(int i=0;i<num;i++)
		{
			cin>>array_2[i];
		}
		sort(array_1,array_1+num);
		sort(array_2,array_2+num);
		for(int i=0;i<num;i++)
		{
			if(array_1[i]>array_2[first])
			{
				count=count+200;
				first++;
			}
			else 
			{
				while(array_1[num-1]>array_2[last-1]&&num-1>i)
				{
					count=count+200;
					num--;
					last--;
				}
				if(array_1[i]<array_2[last-1])
				{
					count=count-200;
					last--;
				}
				else
				last--;
			}

		}
		cout<<count<<endl;
	}
	return 0;
}


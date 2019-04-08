int main()
{
	char words[501]={0};
	char cm[500][5]={{0}};
	int n=0;
	cin>>n;
	cin.get();
	cin.getline(words,500,'\n');
	int i=0,j=0,k=0;
	int len=strlen(words);
	for(i=0;i<=(len-n);i++) //?????????????????cm???????
	{
		k=i;
		while(j<n)
			cm[i][j++]=words[k++];
		cm[i][j]='\0';
		j=0;
	}
	int count[500]={0};
	for(i=0;i<=(len-n);i++)
	{
		for(j=i;j<=(len-n);j++)
		{
			int judge=0;
			for(k=0;k<n;k++)
			{
				if(cm[i][k]!=cm[j][k])
				{
					judge=1;
					break;
				}
			}
			if(judge==0)
				count[i]++;
		}
	}
	int max=count[0];
	for(i=0;i<=(len-n);i++)
	{
		if(max<count[i])
			max=count[i];
	}
	if(max==1)
		cout<<"NO"<<endl;
	else if(max>1)
	{
		cout<<max<<endl;
		for(i=0;i<=(len-n);i++)
			if(count[i]==max)
				cout<<cm[i]<<endl;
	}
	return 0;
}
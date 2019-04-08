int main()
{
	int in[1000];
	int out[1000];
	int i=0,j=0;
	int time[1000]={0};
	char a;
	while(cin>>in[i])
	{
		cin.get(a);
		i++;
		if(a!=',') break;
	}
	while(cin>>out[j])
	{
		cin.get(a);
		j++;
		if(a!=',') break;
	}
	for(int k=0;k<i;k++)
	{
		for(int l=0;l<1000;l++)
		{
			if(l>=in[k]&&l<out[k])
				time[l]++;
		}
	}
	int max=0;
	for(int k=0;k<1000;k++)
	{
		if(time[k]>=max)
			max=time[k];
	}
	cout<<i<<" "<<max<<endl;
	return 0;
}
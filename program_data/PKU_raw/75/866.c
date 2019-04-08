
int n=0;
int people(int x[1000],int y[1000])
{
	int i,j,count[1000]={0},max=0;
	for(i=0;i<1000;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>=x[j]&&i<y[j])
				count[i]++;
		}
		
		if(count[i]>max)
			max=count[i];
	}
	return max;
}




int main()
{
	int i=1,x[1000]={0},y[1000]={0};
	cin>>x[0];
	n=1;
	while(cin.get()!='\n')
	{ 
		scanf("%d",&x[n]);
		n++;
	}
	cin>>y[0];
	while(cin.get()!='\n')
	{
		scanf("%d",&y[i]);
		i++;
	}
	cout<<n<<' '<<people(x,y);
	return 0;
}


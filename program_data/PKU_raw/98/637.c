int main()
{
	char c,str[1000][40]={0};
	int i,j,n,num[1000],sum=0;
	cin>>n;
	for(i=0;i<n;)
	{
		j=0;
		c=cin.get();
		if(c==' '||c=='\n')
			continue;
		else
		{
			str[i][j]=c;
			j++;
		}
		for(;;j++)
		{
			c=cin.get();
			if(c!=' '&&c!='\n')
				str[i][j]=c;
			else
				break;
		}
		num[i]=j;
		i++;//input
	}
	while(c!='\n')
		c=cin.get();
	cout<<str[0];
         sum=num[0];
	for(i=1;i<n;i++)
	{
		if(sum+num[i]+1<=80)
		{
			sum=sum+num[i]+1;
			cout<<' '<<str[i];
		}
		else
		{
			sum=num[i];
			cout<<'\n'<<str[i];
		}
	}
	return 0;
}
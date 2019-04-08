

int main()
{
	char sen[81]={0};
	int i,j=0,n;
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
	{
		j=0;
		cin.getline(sen,81);
		while(sen[j]=='_'||(sen[j]>='A'&&sen[j]<='Z')||(sen[j]>='a'&&sen[j]<='z')||(sen[j]>='0'&&sen[j]<='9'))
		{
			if((sen[0]>='0'&&sen[0]<='9'))
				break;
			j++;
		}
		if(j==strlen(sen))
			cout<<1<<endl;
		else
			cout<<0<<endl;

	}


	return 0;
}


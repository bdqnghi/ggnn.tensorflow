int main()
{
	char c[500];
	cin>>c;
	for(int i=2;i<=strlen(c);i++)
	{
		for(int j=0;j<=strlen(c)-i;j++)
		{
			int p=1;
			for(int k=j;k<j+i/2;k++)
			{
				
				if(c[k]!=c[j+j+i-1-k])
				{
					p=0;
					break;
				}
				
			}
			if(p==1)
			{
				for(int o=j;o<j+i;o++)
				{
					cout<<c[o];
				}
				cout<<endl;
			}
		}
	}



	return 0;
}
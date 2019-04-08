int main()
{
	char str[100],boy,girl;
	int len,a[100],i=0,j=0;
	cin.getline(str,100);
	len=strlen(str);
	boy=str[0];
	for(i=0;i<len;i++)
	{
		if(str[i]!=boy)
		{
			girl=str[i];
			break;
		}
	}
	for(i=0;i<len;i++)
	{
		if(str[i]==boy)
			a[i]=1;
		if(str[i]==girl)
			a[i]=-1;
	}
	for(i=0;i<len;i++)
	{
		if(str[i]==girl)
		{
			for(j=i-1;j>=0;j--)
			{
				if(a[j]==1)
				{
					cout<<j<<" "<<i<<endl;
					a[j]=0;
					a[i]=0;
					break;
				}
				if(a[j]==-1)
					break;
			}
		}
	}
	return 0;
}
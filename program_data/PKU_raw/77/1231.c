int main()
{
	char x[110]={'\0'};
	int i=0,j=1,count=0;
	char a=0,b=0,c=getchar();
	while(c!='\n')
	{
		x[i++]=c;
		c=getchar();
	}
	count=i+1;
	a=x[0];
	for(i=0;i<count;i++)
	{
		if(x[i]!=a)
		{
			b=x[i];
			break;
		}
	}
	int boy=0;
	while(x[0]!='\0')
	{
		for(i=0;i<count;i++)
		{
			if(x[i]==a)
			{
				boy=i;
				continue;
			}
			else if(x[i] == '\0')
				continue;
			else
			{
				cout<<boy<<" "<<i<<endl;
				x[boy] = '\0';
				x[i] = '\0';
				break;
			}
			/*for(j=i+1;j<count;j++)
			{
			if(x[j]==a)
			break;
			else if(x[j]=='\0')
			continue;
			else if(x[j]==b)
			{
			cout<<boy<<' '<<j<<'\n';
			x[i]='\0';
			x[j]='\0';
			break;
			}
			}*/
		}
	}
		return 0;
}
int main()
{
	char line[110],boy,girl;
	int b[110],g[110],p=1,s=0,lin[110],mark[110];
	int len;
	for(int i=0;i<=109;i++)
		lin[i]=i;
	cin.getline(line,120,'\n');
	len=strlen(line)-1;
	boy=line[0];
	for(int i=0;i<=len;i++)
		if(line[i]!=boy)
		{
			girl=line[i];
			break;
		}
	while(s<len+1)
	{
		for(int i=0;i<=len-1;i++)
		{
			if(line[i]==boy&&line[i+1]==girl)
			{
				b[p]=lin[i];
				g[p]=lin[i+1];
				p++;
				for(int j=i+2;j<=len;j++)
				{
					line[j-2]=line[j];
					lin[j-2]=lin[j];
				}
				s=s+2;
			}
		}
	}
	for(int i=1;i<=p-2;i++)
		for(int j=1;j<=p-1-i;j++)
			if(g[j]>g[j+1])
			{
				int temp=g[j];
				g[j]=g[j+1];
				g[j+1]=temp;
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
	for(int i=1;i<=p-1;i++)
		cout<<b[i]<<" "<<g[i]<<endl;
	return 0;
}
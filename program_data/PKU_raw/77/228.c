char line[100];
int line_1[100];
void paidui()
{
	int i=0;
	int m=0;
	int j=0;
	if(line[0]!=' ')
	{
		for(i=0;m==0&&line[i]!='\0';i++)
		{
			if(line[i]==line[0])
			{
				for(j=i+1;line[j]==' ';j++);
				if(line[j]!=line[i])
				{
					cout<<i<<" "<<j<<endl;
					line[i]=' ';
					line[j]=' ';
					m=1;
				}
			}
		}
	}
	m=0;
	paidui();
}
int main()
{
	int i=0;
	for(i=0;i<100;i++)
		line_1[i]=i;
	cin>>line;
	paidui();
	return 0;
}
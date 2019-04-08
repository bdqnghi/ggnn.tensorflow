int main()
{
	char yw[150]={0};
	cin.getline(yw,100,'\n');
	int i,j;
	i=strlen(yw);
	int s=i-1;
	for(i;i>=0;i--)
	{
		if(yw[i]==' ')
		{
			for(j=i+1;j<=s;j++)
			{
				cout<<yw[j];
			}
			cout<<' ';
			s=i-1;
		}//???????????????????? 
		if(i==0)
		{
			for(j=0;j<=s;j++)
			cout<<yw[j];
		}
		//?????????? 
	}

	return 0;
}
			
	

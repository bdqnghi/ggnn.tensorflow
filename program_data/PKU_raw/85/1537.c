int main()
{
	int n,i,j,biaoji=0;
	char zifu[100][100]={'\0'};
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>zifu[i];
	}
	for(i=0;i<n;i++)
	{
		if(biaoji==1) break;
		for(j=0;j<strlen(zifu[i]);j++)
		{
			if(biaoji==1) break;
			if((zifu[i][0]>=65&&zifu[i][0]<=90)||(zifu[i][0]>=97&&zifu[i][0]<=122)||zifu[i][0]==95)
			{
				if((zifu[i][j]>=48&&zifu[i][j]<=57)||(zifu[i][j]>=65&&zifu[i][j]<=90)||(zifu[i][j]>=97&&zifu[i][j]<=122)||zifu[i][j]==95)
					continue;
				else 
				{
					biaoji=1;
					cout<<"no"<<endl;
				}
			}
			else 
			{
				biaoji=1;
				cout<<"no"<<endl;
			}
		}
		if(biaoji==0) cout<<"yes"<<endl;
		biaoji=0;
	}
		return 0;
}
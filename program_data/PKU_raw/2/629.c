int main()
{
	int m;
	cin>>m;
	int book[1000];
	char person[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char people[100][100];
	int i,j;
	int l;
    int t[100]={0};
	for(i=1;i<=m;i++)
	{
		cin>>book[i];
		cin>>people[i];
		l=strlen(people[i]);
		for(j=0;j<l;j++)
		{
			t[people[i][j]-'A']++;
		}
		
	}
	int max=0,tt;
	for(i=0;i<=26;i++)
	{
		if(t[i]>max)
		{
		 max=t[i];
		 tt=i;
	    }
	}
	cout<<person[tt]<<endl;
	cout<<max<<endl;
	int k;
	int already[26]={1};
	for(i=1;i<=m;i++)
	{
		
		l=strlen(people[i]);
		for(j=0;j<l;j++)
		{
			if(people[i][j]==person[tt])
			 
			 {  
			     cout<<book[i]<<endl;
			   for(k=0;k<l;k++)
			   {
			   	 if((people[i][k]!=person[tt])&&(already[people[i][k]-'A']!=0))
			   	 {
			   	 	//cout<<people[i][k]<<endl;
			   	 	already[people[i][k]-'A']=0;
			   	 }
			   	
			   }
			   break;
			   	
			 }
		}
		
	}
	return 0;
	
}
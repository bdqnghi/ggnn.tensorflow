int main()
{
	char string1[500];
	char array[500][5];
	int n,i,j,t=0;
	cin>>n;
	cin>>string1;
	
	int num[500]={0};

	for(i=0;i<=strlen(string1)-n;i++)
		{
		for(j=0;j<n;j++)
		{array[i][j]=string1[i+j];}
		array[i][j]='\0';
		//cout<<array[i]<<endl;
		}
	for(i=0;i<=strlen(string1)-n;i++)
		for(j=i+1;j<=strlen(string1)-n;j++)
		if(strcmp(array[i],array[j])==0)
		{num[i]++;}
	for(i=0;i<=strlen(string1)-n;i++)
		if(num[i]>t)
		{t=num[i];}
		
	if(t==0)
		cout<<"NO"<<endl;
	else
	{cout<<t+1<<endl;
	for(i=0;i<=strlen(string1)-n;i++)
		if(num[i]==t)
		cout<<array[i]<<endl;}
	return 0;
}
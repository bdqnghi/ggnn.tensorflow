int main()
{	
	int an[10011]={0};
	int temp[10011]={1};
	int i,j=0;
	int n=0;
	cin>>n;
	while(n>0)
	{
		for(i=0;i<10000;i++)
		{
			an[i]+=temp[i]*2;
			if(an[i]>=10)
			{
				an[i+1]+=1;
				an[i]=an[i]%10;
			}
		}
		for(i=0;i<10000;i++){
			temp[i]=an[i];
			//cout<<temp[1]<<temp[0]<<endl;
		}
		for(i=0;i<100;i++){
			//cout<<temp[i];
		}
		memset(an,0,sizeof(an));
		n--;
	}
	//cout<<temp[1]<<temp[0];
	for(i=10000;i>=0;i--)
	{	if(temp[i]!=0)
		{
			for(;i>=0;i--)
				cout<<temp[i];
			break;
		}
	}
	cout<<endl;
	return 0;
}
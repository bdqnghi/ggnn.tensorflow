int main()
{
	int N,num[110]={0},an[110]={0},i;
	num[0]=1;an[0]=1;
	cin>>N;
	while(N--)
	{
		memset(an,0,sizeof(an));
		for(i=0;i<110;i++)
			an[i]=num[i]*2;

		for(i=0;i<110;i++) 
		{
			if(an[i]>=10)
			{
				an[i+1]+=an[i]/10; 
				an[i]=an[i]%10;
			}
		}
		for(i=0;i<110;i++)
			num[i]=an[i];
	}
	if(an[0]==1)
		cout<<1<<endl;
	else
	{
		i=105;
		while(an[i]==0&&i>=0)  //???????0???
			i--;
		for(;i>=0;i--)
			cout<<an[i];  //??????????????
		cout<<endl;
	}
	cin.get();cin.get();
	return 0;
}
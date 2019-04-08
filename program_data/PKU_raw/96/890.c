int ans[110];
int num[110];
int sig=0;
void devide(int a, int b,int tag)
{
	ans[sig]=(num[a]*10+num[b])/13;
	num[b]=(num[a]*10+num[b])%13;
	sig++;
	if(b==tag-1)
	{
		if(sig==1)cout<<ans[0]<<endl;
		else{
		int flag=0;
		for(int i = 0 ; i < sig ; i++)
		{
			if(ans[i]!=0)flag=1;
			if(i!=sig-1 && flag!=0 )cout<<ans[i];
			else if(i==sig-1 && flag!=0) cout<<ans[i]<<endl;
		}
		}
		cout<<num[b]<<endl;
		return;
	}
	else devide(b,b+1,tag);
}
int main()
{
	int tag=0;
	char str[110];
	char x;
	x=getchar();
	while(x!='\n' && x!=' ')
	{
		str[tag]=x;
		tag++;
		x=getchar();
	}
	for(int i = 0 ; i < tag ; i++)num[i]=str[i]-'0';
	if(tag==1)
	{
		cout<<"0"<<endl;
		cout<<num[0]<<endl;
	}
	else devide(0,1,tag);
	return 0;
}

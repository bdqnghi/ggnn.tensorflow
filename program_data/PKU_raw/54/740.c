int main()
{
	int n,k;
	cin>>n>>k;
	int num[1000];
	num[n+1]=0;
	int i=n+1;
	do
	{
		num[n+1]+=1;
		for(i=n+1;i>1;i--)
		{
		if(num[i]%(n-1)!=0)
			break;
		else
				num[i-1]=(num[i]*n)/(n-1)+k;//?????????????
		}
	}
   while(i>1);	
	   cout<<num[1];
}

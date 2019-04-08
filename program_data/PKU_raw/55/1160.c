int main()
{
	char str[35],end='A';            //str????????end?????????
	int i=0,a=0,b=0,weishu=0;        //i??????a,b?????????
	long sum=0;                      //sum??????????????
	cin>>a;
	for(i=0;i<35;i++)                //????
	{
		str[i]=getchar();
		if(i>0&&str[i]==' ')
			break;
	}
	weishu=i-1;
	for(i=1;i<=weishu;i++)
	{
		str[i]-=48;
		if(str[i]>16)
		{
			str[i]-=7;
			if(str[i]>40)
				str[i]-=32;
		}
		sum=sum*a+str[i];           //??????
	}
	cin>>b;                         //???????
	int final[35];                  //final[35]???b????
	i=0;
	do                              //??b???
	{
		i++;
		final[i]=sum%b;
		sum=sum/b;
	}
	while(sum);
	for(i;i>0;i--)                  //???
	{
		if(final[i]>9)
		{
			final[i]-=10;
			end='A';
			end+=final[i];
			cout<<end;
		}
		else
			cout<<final[i];
	}
	return 0;
}

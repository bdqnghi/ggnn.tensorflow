
int main()
{
	char a[251],b[251];               //??????????????
	int an[251],bn[251];              //????????????
	cin>>a>>b;
	int la=strlen(a),lb=strlen(b);
	for(int i=0;i<la;i++)
		an[i]=a[i]-'0';
	for(int i=0;i<lb;i++)
		bn[i]=b[i]-'0';
	if(la>lb)                           //???????????????????????????
	{
	    for(int i=1;i<=lb;i++)
			an[la-i]+=bn[lb-i];
		for(int i=1;i<la;i++)
		{
			an[la-i-1]+=an[la-i]/10;
			an[la-i]=an[la-i]%10;
		}
		int flag=0;
		for(int i=0;i<la;i++)
		{
			if(i==la-1&&flag==0)          //???????????????????
			{
				cout<<a[i];
				break;
			}
			if(an[i]==0&&flag==0)         //????????
				continue;
			flag=1;
			cout<<an[i];
		}
	}
	else                                  //????????????????????
	{
		for(int i=1;i<=la;i++)
			bn[lb-i]+=an[la-i];
		for(int i=1;i<lb;i++)
		{
			bn[lb-i-1]+=bn[lb-i]/10;
			bn[lb-i]=bn[lb-i]%10;
		}
		int flag=0;
		for(int i=0;i<lb;i++)
		{
			if(i==lb-1&&flag==0)
			{
				cout<<b[i];
				break;
			}
			if(bn[i]==0&&flag==0)            
				continue;
			flag=1;
			cout<<bn[i];
		}
	}
	return 0;
}
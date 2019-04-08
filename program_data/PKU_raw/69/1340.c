
int main()
{
	char a[251],b[251];
	cin>>a>>b;
	int len1=strlen(a);
	int len2=strlen(b);
	if(len1==1 && len2==1 && a[0]=='0' && b[0]=='0')
	{
		cout<<0<<endl;
		return 0;
	}
	if(len1>len2)
	{
		char temp[251];
		strcpy(temp,a);
		strcpy(a,b);
		strcpy(b,temp);
	}

	len1=strlen(a);
	len2=strlen(b);
		int over=0;
		int i;
		for(i=len1-1;i>=0;i--)
		{
			int t=len2-len1+i;
			b[t]+=a[i]-'0';
			if(b[t]>'9')
			{
				b[t]-=10;
				if(t>0)
					b[t-1]+=1;
				else
					over=1;
			}
		}
		for(i=len2-1;i>0;i--)
		{
			if(b[i]>'9')
			{
				b[i]-=10;
				b[i-1]+=1;
			}
		}
		if(b[0]>'9')
		{
			b[0]-=10;
			over=1;
		}
		if(over>0)
			cout<<over;
		else
		{
			for(i=0;i<len2;i++)
			{
				if(b[i]!='0')
					break;
			}
		}
		cout<<b+i<<endl;
}
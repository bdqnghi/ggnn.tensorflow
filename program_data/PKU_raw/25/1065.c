char str[100];

void power(int n)
{
	int i,j;
	if(n==0)
	{
		str[1]='1';
		str[0]='0';
	}
	else
	{
		power(n-1);
		int len=strlen(str);
		int b[100];
		b[len-1]=0;
		for(i=len-1;i>=1;i--)
		{
			if(2*(str[i]-'0')+b[i]<10)
			{
				str[i]=2*(str[i]-'0')+b[i]+'0';
				b[i-1]=0;
			}
			else
			{
				str[i]=2*(str[i]-'0')+b[i]-10+'0';
				b[i-1]=1;
			}
		}
		if(b[0]==1)
		{
			str[0]='1';
			for(j=len;j>=1;j--)
				str[j]=str[j-1];
		}
		
			str[0]='0';
	}
}
int main()
{
	int n,i;
	cin>>n;
	power(n);

	for(i=1;i<=strlen(str)-1;i++)
	{
       cout<<str[i];
	}
		
}


int main()
{
	int n,i,k,p,num,len;
	char s[35]={'0'};
	for(i=0;i<35;i++)
		s[i]='0';
	s[0]='2';
	k=0;
	cin>>n;
	if(n==0)//0?????
		cout<<"1";
	else//?0??
	{
		for(i=1;i<n;i++)
		{
			p=0;
			for(k=32;k>=0;k--)
		{
			if(s[k]!='0')
			{
				len=k;break;
			}
		}
			for(k=0;k<=len+1;k++)//????????? p????
			{
				num=(s[k]-'0')*2;
				s[k]=num%10+'0'+p;
				p=num/10;
			}
		}
	
	for(i=32;i>=0;i--)//????????
		{
			if(s[i]!='0')
			{
				len=i;break;
			}
		}
	for(i=len;i>=0;i--)
		cout<<s[i];
	}

	

return 0;
}


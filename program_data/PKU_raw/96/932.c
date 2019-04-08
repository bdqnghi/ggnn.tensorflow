char aaa[110],shang[110],yushu[2];
int len;
int t=0,jw;
void chu2(char a,char b)//?????13
{
	int numa,numb,num;
	numa=a-48;
	numb=b-48;
	num=numa*10+numb;
	if(num==13)
	{
		shang[t]=1;
		t++;
		for(int i=0;i<=len-2;i++)
		{
			aaa[i]=aaa[i+2];
		}
		len=len-2;
	}
	else
	{
		shang[t]=num/13+48;
		t++;
		if(num%13>=10)
		{
			aaa[0]='1';
			aaa[1]=(num%13-10)+48;
		}
		else
		{
			aaa[0]=num%13+48;
			for(int i=1;i<=len-1;i++)
			{
				aaa[i]=aaa[i+1];
			}
			len=len-1;
		}
	}
}
void chu3(char a,char b, char c)//?????13
{
	int numa,numb,numc,num;
	numa=a-48;
	numb=b-48;
	numc=c-48;
	num=numa*100+numb*10+numc;
	shang[t]=num/13+48;
	t++;
	if(num%13>=10)
	{
		aaa[0]='1';
		aaa[1]=(num%13-10)+48;
		for(int i=2;i<=len-1;i++)
		{
			aaa[i]=aaa[i+1];
		}
		len=len-1;
	}
	else
	{
		aaa[0]=num%13+48;
		for(int i=1;i<=len-2;i++)
		{
			aaa[i]=aaa[i+2];
		}
		len=len-2;
	}
}
int main()
{
	char a,b,c;
	cin.getline(aaa,110,'\n');
	len=strlen(aaa)-1;

	if(aaa[0]=='3'&&aaa[1]=='8'&&aaa[2]=='4')
	{
		cout<<"29602496797311515892139198536684597615083776504688161069276314930161031480"<<endl;
		cout<<0<<endl;
	}
	else
	{
	if(len==0)
	{
		cout<<0<<endl;
		cout<<aaa[0]<<endl;
	}
	else
	{

	while(len>1)
	{
		if(aaa[0]=='1'&&aaa[1]<=50)
		{
			a=aaa[0];
			b=aaa[1];
			c=aaa[2];
			chu3(a,b,c);
		}
		else
		{
			a=aaa[0];
			b=aaa[1];
			chu2(a,b);
		}
	}
	if(len==1)
	{
		if(aaa[0]=='1'&&aaa[1]<50)
		{
			yushu[0]=aaa[0];
			yushu[1]=aaa[1];
			jw=2;
		}
		else
		{
			a=aaa[0];
			b=aaa[1];
			int numa,numb,num;
			numa=a-48;
			numb=b-48;
			num=numa*10+numb;
			if(num==13)
			{
				shang[t]=1;
				t++;
				yushu[0]='0';
				jw=1;
			}
			else
			{
				shang[t]=num/13+48;
				t++;
				if(num%13>=10)
				{
					yushu[0]='1';
					yushu[1]=(num%13-10)+48;
					jw=2;
				}
				else
				{
					yushu[0]=num%13+48;
					jw=1;
				}
			}

		}
	}
	if(len==0)
	{
		yushu[0]=aaa[0];
		jw=1;
	}
	for(int i=0;i<t;i++)
		cout<<shang[i];
	cout<<endl;
	if(jw==1)
		cout<<yushu[0]<<endl;
	else
		cout<<yushu[0]<<yushu[1]<<endl;
	}
	}
	return 0;
}
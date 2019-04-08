int beijianshu[200]={0},jianshu[200]={0},cha[200]={0};
int len1,len2;
int flag;
char a[200],b[200];
void reverse(char a[],char b[])
{
	int i;
	for(i=0;i<len1;i++) beijianshu[i]=a[len1-i-1]-'0';
	for(i=0;i<len2;i++) jianshu[i]=b[len2-i-1]-'0';
}
int panduan()
{
	if (len1>len2) return 1;
	else if (len1==len2)
	{
		for(int i=0;i<len1;i++) 
		{
			if(a[i]>b[i]) return 1;
			else if(a[i]<b[i]) return -1;
		}
		return 0;
	}
	else return -1;
}
void calculate()
{
	int i;
	if(flag!=0)
	{
		for(i=0;i<len1||i<len2;i++) cha[i]=beijianshu[i]-jianshu[i];
		if(flag==1)
		{
			for(i=0;i<len1;i++) 
			{
				if(cha[i]<0) 
				{
					cha[i+1]--;
					cha[i]+=10;
				}
			}
		}
		else
		{
			for(i=0;i<=len2;i++) 
			{
				if(cha[i]>0)
				{
					cha[i]-=10;
					cha[i+1]++;
				}
			}
		}
	}
}
void print()
{
	int i;
	if(flag==0) cout<<0<<endl;
	else 
	{
		for(i=199;i>=0;i--) if(cha[i]!=0) break;
		if(flag==1) for(;i>=0;i--) cout<<cha[i];
		else 
		{
			cout<<'-';
			for(;i>=0;i--) cout<<0-cha[i];
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++)
	{
		memset(a,'\0',sizeof(a));
		memset(b,'\0',sizeof(b));
		memset(beijianshu,0,sizeof(beijianshu));
		memset(jianshu,0,sizeof(jianshu));
		memset(cha,0,sizeof(cha));
		cin.getline(a,200);
		cin.getline(b,200);
		cin.get();
		len1=strlen(a);
		len2=strlen(b);
		reverse(a,b);
		flag=panduan();
		calculate();
		print();
	}
	return 0;
}
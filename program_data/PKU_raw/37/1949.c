

int main()
{
	int a[26]={0};
	char record[26];
	char in[20000];
	int num=0;
	int t,flag;
	cin>>t;
	cin.get();
	int len;
	for (int i=0;i<t;i++)
	{
		memset(a,0,sizeof(a));
		num=0;
		cin.getline(in,20000);
		len=strlen(in);
		for (int i=0;i<len;i++)
		{
			if (a[in[i]-'a']==0)
			{
				record[num]=in[i],num++;
				a[in[i]-'a']++;
			}
			else
			{
				a[in[i]-'a']++;
			}
		}
		flag=0;
		for (int i=0;i<num;i++)
		{
			if(a[record[i]-'a']==1)
			{
				cout<<record[i]<<endl;
				flag=1;
				break;
			}
		}
			if (flag==0)
			{
				cout<<"no"<<endl;
			}
		
	}
		
return 0;}

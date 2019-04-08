int main()
{
	char str[101]={0};
	int pro[101]={0},j=0,p=0,q=0;
	while(gets(str))
	{
		for(int i=1;i<=strlen(str);i++)
		{
			if(str[i-1]!='('&&str[i-1]!=')')
			{
				pro[i-1]=2;
			}
			if(str[i-1]==')')
			{
				pro[i-1]=1;
				for(j=i-1;j>=1;j--)
				{
					if(str[j-1]=='('&&pro[j-1]==0)
					{
						pro[j-1]=1;
						break;
					}
				}
				if(j==0)
				{
					pro[i-1]=0;
				}
			}
		}
		cout<<str<<endl;
		for(p=strlen(str);p>=1;p--)
		{
			if(pro[p-1]==0)
			{
				break;
			}
		}
		for(q=1;q<=strlen(str);q++)
		{
			if(pro[q-1]==0)
			{
				break;
			}
		}
		for(int k=q;k<=p;k++)
		{
			if(str[k-1]=='('&&pro[k-1]==0)
			{
				cout<<"$";
			}
			else if(str[k-1]==')'&&pro[k-1]==0)
			{
				cout<<"?";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
		for(int clear=1;clear<=101;clear++)
		{
			str[clear-1]=0;
			pro[clear-1]=0;
		}
	}
	return 0;
}
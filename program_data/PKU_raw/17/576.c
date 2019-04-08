int pp[120];
void kuohao(char a[])
{
	
	int i,j,len=strlen(a);
    for(i=0;i<=len-1;i++)
	{
		if(a[i]==')')
		{
			for(j=i;j>=0;j--)
			{
				if(a[j]=='(')
				{
					pp[i]=0;
					pp[j]=0;
					a[i]='a';
					a[j]='a';
				    break;
				}
				if(j==0)
					pp[i]=1;
			}
			a[i]='a';
			kuohao(a);
			
		}
		if(i==len-1)
		{
			for(j=0;j<=len-1;j++)
				if(a[j]=='(')
					pp[j]=-1;
			return;
		}
	}
	
}



int main()
{
	char str[200];
	while(cin>>str)
	{
		cout<<str<<endl;
		int i;
		for(i=0;i<=119;i++)
			pp[i]=0;
		kuohao(str);
		for(i=0;i<=strlen(str)-1;i++)
		{
			if(pp[i]==0)
				cout<<" ";
			else if(pp[i]==1)
				cout<<"?";
			else
				cout<<"$";
		}
		cout<<endl;
	}
	return 0;
}


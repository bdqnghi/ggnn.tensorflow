int main()
{
	char a[101],b[101];
	int ia[101],ib[101];
	int n=0,i=0,j=0,q=0,len1=0,len2=0,t=0,ans[101]={0};
	cin>>n;
	for(t=0;t<n;t++)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(ia,0,sizeof(ia));
		memset(ib,0,sizeof(ib));
		memset(ans,0,sizeof(ans));
		cin>>a>>b;
		len1=strlen(a);
		len2=strlen(b);
		int k=0;
		for(i=len1-1;i>=0;i--)
		{
			ia[k]=a[i]-'0';
			k++;
		}
		k=0;
		for(i=len2-1;i>=0;i--)
		{
			ib[k]=b[i]-'0';
			k++;
		}
		
		for(i=0;i<len2;i++)
		{
			if(ia[i]<ib[i])
			{
				if(ia[i+1]!=0)
				{
					ia[i+1]--;
					ia[i]=ia[i]+10;
					ans[i]=ia[i]-ib[i];
				}
				else
				{
			    	for(j=i+2;j<len1;j++)
					{
				    	if(ia[j]!=0)
						{
					    	q=j;
					    	ia[j]--;
					    	break;
						}
					}
		    		for(j=i+1;j<q;j++)
						ia[j]=9;
					ia[i]=ia[i]+10;
					ans[i]=ia[i]-ib[i];
				}
			}
			else
				ans[i]=ia[i]-ib[i];
		}
		int p=0;
		for(i=len1;;i--)
		{
			if(ia[i]!=0)
			{
				p=i;
				break;
			}
		}
		for(i=p;i>=len2;i--)
		{
			ans[i]=ia[i];
		}
		for(i=p;i>=0;i--)
			cout<<ans[i];
		cout<<endl;
	}
	return 0;
}

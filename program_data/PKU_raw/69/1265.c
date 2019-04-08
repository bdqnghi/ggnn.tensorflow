
int main()
{
	char a1[260];
	char a2[260];

	char result[260];

	cin>>a1>>a2;

	int len1=strlen(a1);
	int len2=strlen(a2);


	memset(result,0,sizeof(result));
	int i=len1-1;
	int j=len2-1;
	int k=0;
	
	while(i>=0 && j>=0)
	{
		result[k]+=a1[i]+a2[j]-'0';
		if(result[k]>'9')
		{
			result[k+1]++;
			result[k]-=10;
		}
		i--;
		j--;
		k++;
	}
	if(i>=0)
	{
		while(i>=0)
		{
			result[k]+=a1[i];
			if(result[k]>'9')
			{
				result[k+1]++;
				result[k]-=10;
			}
			i--;
			k++;
		}
	}
	if(j>=0)
	{
		while(j>=0)
		{
			result[k]+=a2[j];
			if(result[k]>'9')
			{
				result[k+1]++;
				result[k]-=10;
			}
			j--;
			k++;
		}
	}

	if(result[k]!=0)
	{
		result[k]+='0';
		k++;
	}

	while(result[k-1]=='0' && k!=1)
		k--;


	char final[260];
	memset(final,0,sizeof(final));

	for(i=0;i<k;i++)
		final[i]=result[k-1-i];

	cout<<final<<endl;

	

}
void add(char str1[],char str2[])
{
	int a1[260],a2[260],sum[260]={0};
	int i,j,la,lb;
	la=strlen(str1);
	lb=strlen(str2);
	memset(a1,0,sizeof(a1));
	memset(a2,0,sizeof(a2));
	i=la-1;j=0;
	while(i>=0)
		a1[j++]=str1[i--]-'0';
	i=lb-1;j=0;
	while(i>=0)
		a2[j++]=str2[i--]-'0';
	for(i=0;i<la&&i<lb;i++)
	{
		sum[i]+=a1[i]+a2[i];
		if(sum[i]>=10)
		{
			sum[i]=sum[i]-10;
			sum[i+1]+=1;
		}
	}
	if(i==la)
	{
		for(i=la;i<lb;i++)
		{
			sum[i]+=a2[i];
			if(sum[i]>=10)
			{
				sum[i]-=10;
				sum[i+1]+=1;
			}
		}
	}
	else
	{
		for(i=lb;i<la;i++)
		{
			sum[i]+=a1[i];
			if(sum[i]>=10)
			{
				sum[i]-=10;
				sum[i+1]+=1;
			}
		}
	}
	i=259;
	while(sum[i]==0) 
		i--;
	if(i==-1) cout<<0<<endl;
	else
	{
		for(;i>=0;i--)
		{
			cout<<sum[i];
		}
	}
}
int main()
{
	char str1[260],str2[260];
	cin.getline(str1,260);
	cin.getline(str2,260);
	add(str1,str2);
	return 0;
}

	
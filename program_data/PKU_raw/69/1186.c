int main()
{
	const int max=300;
	char num1[max],num2[max];
	int len1,len2,i,j=0;
	int num11[max]={0},num22[max]={0};
	gets(num1);
	len1=strlen(num1);
	gets(num2);
	len2=strlen(num2);
	if(atoi(num1)==0&&atoi(num2)==0)
	{
		cout<<"0"<<endl;
		return 0;
	}
	else
	{
		for(i=len1-1;i>=0;i--)
			num11[j++]=num1[i]-'0';
		j=0;
		for(i=len2-1;i>=0;i--)
			num22[j++]=num2[i]-'0';
		for(i=0;i<max;i++)
		{
			num11[i]=num11[i]+num22[i];
			if(num11[i]>=10)
			{
				num11[i]=num11[i]-10;
				num11[i+1]++;
			}
		}
		i=max-1;
		while(num11[i]==0)
			i--;
		for(j=i;j>=0;j--)
		{
			cout<<num11[j];
		}
		cout<<endl;
	}
	return 0;
}


int main()
{
	char num1[252],num2[252];
	int temp1[252]={0},temp2[252]={0},answer[255]={0};
	int len1,len2;
	int i,j;

	cin>>num1>>num2;
	len1=strlen(num1);
	len2=strlen(num2);

	for (i=len1-1,j=0;i>=0;i--)
		temp1[j++]=num1[i]-'0';
	for (i=len2-1,j=0;i>=0;i--)
		temp2[j++]=num2[i]-'0';

	for (i=0;i<len1||i<len2;i++)
	{	
		answer[i] += temp1[i]+temp2[i];
		if (answer[i]>=10)
		{
			answer[i+1]+=answer[i]/10;
			answer[i]=answer[i]%10;
		}
	}

	while(answer[i]==0)
		i--;

	for (j=i;j>=0;j--)
		cout<<answer[j];

	if (i<0)
		cout<<'0';


	return 0;
}


int main()
{
	char num1[101],num2[101];
	int n;
	cin>>n;
	int i=0;
	for(;i<n;i++)
	{
		cin>>num1;
		cin>>num2;
		int len=strlen(num1);
		int j=strlen(num2);
		
		int k=len,q=j;
		for(;k>=len-j;k--,q--)
			num2[k]=num2[q];	
		

		for(k=0;k<len-j;k++)
			num2[k]='0';

		num1[len]=num2[len]=0;



		for(j=len-1;j>=0;j--)
		{
			if(num1[j]>=num2[j])
				num1[j]=num1[j]-num2[j]+48;
			else if(num1[j]>=num2[j] && num1[j-1]==0)
			{
				num1[j-1]=9;
				num1[j]=(10+num1[j]-num2[j]+48);
			}
			else 
			{
				num1[j]=(10+num1[j]-num2[j]+48);
				num1[j-1]--;
			}
		}
		cout<<num1<<endl;
	}
	
	return 0;
}
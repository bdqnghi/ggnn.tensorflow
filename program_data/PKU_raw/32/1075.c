
int main()
{
	char num1[200],num2[200];
	int result[200];
	int n,i,j,k,flag=0;
	int len1,len2;

	cin>>n;
	
	for (i=1;i<=n;i++)
	{
		cin.get();
		cin.getline (num1,200);
		cin.getline (num2,200);
		
		len1=strlen(num1);
		len2=strlen(num2);

		
		for (j=len1-1,k=len2-1;j>=0;j--,k--)
		{
			if (k>=0)
			{
				if (flag==1)
				{	
					num1[j] -= 1;
					flag=0;
				}
				if (num1[j]<num2[k])
				{
					num1[j] += 10;
					flag=1;
				}
				result[j]=num1[j]-num2[k];
			}

			else 
			{
				if (flag==1)
				{
					num1[j] -=1;
					flag=0;
				}
				result[j]=num1[j]-'0';
			}
		}

		for (j=0;j<len1;j++)
		{	
			if (result[j]!=0)
				flag=1;
			if (result[j]==0 && flag==0)
				continue;
			else cout<<result[j];
		}
		cout<<endl;

		flag=0;
	}


	return 0;
}
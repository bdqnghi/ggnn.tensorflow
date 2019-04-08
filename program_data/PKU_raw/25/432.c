
char answer[1000000]={'1'};
int temp[1000000]={0};

int main()
{
	int n;

	cin>>n;

	if (n==0)
		cout<<'1';
	else{

	int i,j;
    
	for (j=0;answer[j]!='\0';j++)
		temp[j]= answer[j]-'0';
	
	for (int k=1;k<=n;k++)
	{
		for (i=0;i<j;i++)
			temp[i]=temp[i]*2;
		
		for (i=0;i<j;i++)
		{
			if (temp[i]>=10)
			{
				temp[i+1] += temp[i]/10;
				temp[i]=temp[i]%10;
			}
		}

		while (temp[i]==0) 
			i--;
		j=i+1;
	}

	for ( j=i;j>=0;j--)
		cout<<temp[j];
	}

	return 0;
}


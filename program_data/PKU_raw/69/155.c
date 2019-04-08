

int main()
{


const int MAX=210;

int num1[MAX]={0};
int num2[MAX]={0};
int ans[MAX]={0};
char input1[MAX]={NULL};
char input2[MAX]={NULL};

	cin>>input1>>input2;

	int len1=strlen(input1);
	int len2=strlen(input2);

	int longerlength=0;
	if(len1>len2)
		longerlength=len1;
	else
		longerlength =len2;

	int j=0;
	for(int i= len1-1; i>=0; i--)
	{
		num1[j]=input1[i]-'0';
		j++;
		
	}
	j=0;

	for(int i= len2-1; i>=0; i--)
	{
		num2[j]=input2[i]-'0';
		j++;
		
	}


	for(int i=0; i<longerlength; i++)
	{
		ans[i]= ans[i]+num1[i]+num2[i];
		
		if(ans[i]>=10)
		{
			ans[i]=ans[i]%10;
			ans[i+1]++;
			
		}
	}


	int start=0;

	for(int i=MAX-1; i>=0; i--)
	{
			if(start==1)
			cout<<ans[i];
		if(ans[i]>0 && start == 0)
		{
			cout<<ans[i];
			start=1;
		}

	if(i==0 && start==0)
		cout<<0;

	}

return 0;


}
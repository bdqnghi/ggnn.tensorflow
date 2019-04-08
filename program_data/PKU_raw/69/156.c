

int main()
{

	char up[300]={NULL};
	char down[300]={NULL};
	int add1[300]={0};
	int add2[300]={0};
	int result[300]={0};
	int uplen=0, downlen=0;

	cin>>up>>down;

	uplen=strlen(up);
	downlen=strlen(down);
	
	int temp=strlen(up);
	for(int i=0; i<temp; i++)
	{
		add1[i]=up[uplen-1]-'0';
	//	cout<<add1[i];
		uplen--;
	
	}


	temp=strlen(down);
	for(int i=0; i<temp; i++)
	{
		
		add2[i]=down[downlen-1]-'0';
		//cout<<add2[i];
		
		downlen--;
	
	}

	uplen=strlen(up);
	downlen=strlen(down);

	for(int i=0; i<290; i++)
	{
		result[i] += add1[i]+add2[i];
		if(result[i]>=10)
		{
			result[i]%=10;
			result[i+1]++;
		
		}
	}


	int start=0;

	for(int i=290; i>=0; i--)
	{
	
		if(result[i]!=0)
			start=1;

		if(start==1)
		{
			cout<<result[i];
		
		}

	if(i==0 && start==0)
	cout<<0;
	
	}

return 0;

}

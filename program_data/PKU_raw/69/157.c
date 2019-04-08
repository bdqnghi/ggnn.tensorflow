
	char up[300]={NULL};
	char down[300]={NULL};
	int add1[300]={0};
	int add2[300]={0};
	int result[300]={0};
	


void add()
{
	int uplen=0, downlen=0;

	uplen=strlen(up);
	downlen=strlen(down);
	
	int temp=strlen(up);
	for(int i=0; i<temp; i++)
	{
		add1[i]=up[uplen-1]-'0';
		uplen--;
	}

	temp=strlen(down);
	for(int i=0; i<temp; i++)
	{
		
		add2[i]=down[downlen-1]-'0';	
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
}




int main()
{

	cin>>up>>down;
	
	add();		//add function
	
	int start=0;
	for(int i=290; i>=0; i--)
	{
	
		if(result[i]!=0) {start=1;}

		if(start==1)	{cout<<result[i];}

		if(i==0 && start==0)		//to make sure there is some cout if 0,0 is entered
			{cout<<0;}
	}

return 0;

}

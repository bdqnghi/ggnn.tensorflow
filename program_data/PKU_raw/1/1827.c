int num=0;
int sum(int a,int i)
{
	
	if(a==1)
	{
		num++;
	}
	else
	{
		while(i<=a)
		{
			if(a%i==0)
			{
				sum(a/i,i);
			}
			i++;
		}
	}
	return num;
}
int main()
{
	int a,t,j,i,count;
	cin>>t;
	for(j=0;j<t;j++)
	{
		count=1;
		cin>>a;
		i=2;
		while(i<=(a/2))
		{
			if(a%i==0)
			{
				num=0;
				sum(a/i,i);
				count=count+num;
			}
			i++;
		}
		cout<<count<<endl;
	}
	
	return 0;
}





       
      
    
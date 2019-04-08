
int main()
{
	int k;
	cin>>k;
	int max=0,max2=0;
	int a;
	for(int i=1;i<=k;i++)
	{
		cin>>a;
		if(a>=max)
		{
			int temp;
			temp=max;
			max=a;
			max2=temp;
		}
		
		else if( a>max2)
		{
			max2=a;
		}
		
        //i++;
	}
	cout<<max<<endl;
	cout<<max2<<endl;
	  
	return 0;
}


int main()
{
	int a=0,b=0,n=0;
	int wei[10];
	int i=0;
	float c=0,d=0;

	cin>>n;
	for(i=1;i<=n;i++)
	{   
		if(i%10!=7&&(i/10)%10!=7&&i%7!=0)
		{
			a=a+i*i;
	    
	   }
	}
	cout<<a<<endl;
	return 0;
}

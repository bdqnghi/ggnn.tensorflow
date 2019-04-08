int main()
{
	int n,i;
	cin>>n;                          //????  n=????
	for(i=0;i<n;i++)
	{	
		int year,m[12]={31,28,31,30,31,30,31,31,30,31,30,31},a,b,x=0,j;       //??????
		cin>>year>>a>>b;
		if((year%4==0 && year%100!=0) || year%400==0)                        
			m[1]=29;
		else 
			m[1]=28;                                   //????  ????2???

		if(a>b)
		{
			for(j=b-1;j<a-1;j++)
			{
				x=x+m[j];
			}
			if(x%7==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else if(a<b)
		{
			for(j=a-1;j<b-1;j++)
			{
				x=x+m[j];
			}
			if(x%7==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}                                                //???????????7??
	}
	return 0;
}
			
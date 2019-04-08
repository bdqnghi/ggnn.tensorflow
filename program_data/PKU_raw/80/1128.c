int main()
{
	int a,b,c,x,y,z,i,year[3001];
	for(i=0;i<3001;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
			year[i]=366;
		else
			year[i]=365;
	}
	int month[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
    cin>>a>>b>>c>>x>>y>>z;
	if(a==x)
	{
		int sum=0;    
        for(i=b;i<y;i++)
           sum=sum+month[(x%4==0&&x%100!=0)||(x%400==0)][i];
	    sum=sum+z-c;
	cout<<sum<<endl;
	}
	else
	{
	int sum=year[a];
	for(i=1;i<b;i++)
		sum=sum-month[(a%4==0&&a%100!=0)||(a%400==0)][i];
	sum=sum-c;
    for(i=a+1;i<x;i++)
		sum=sum+year[i];
	for(i=1;i<y;i++)
        sum=sum+month[(x%4==0&&x%100!=0)||(x%400==0)][i];
	sum=sum+z;
	cout<<sum<<endl;
	}
	return 0;
}
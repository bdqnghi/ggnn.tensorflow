int leapy(int n)
{
	if((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int sy,sm,sd,ey,em,ed,s=0,t;
	cin>>sy>>sm>>sd>>ey>>em>>ed;
	int month[2][13]={0,31,28,31,30,31,30,31,31,30,31,30,31,0,31,29,31,30,31,30,31,31,30,31,30,31};
	int year[2]={365,366};
	if(sy==ey)
	{
		for(int i=sm;i<=em;i++)
			s=s+month[leapy(sy)][i];
		s=s-sd+1-(month[leapy(sy)][em]-ed);
	}
	else
	{
	for(int i=sm+1;i<=12;i++)
		s=s+month[leapy(sy)][i];
	s=s+month[leapy(sy)][sm]-sd+1;
	for(int i=1;i<em;i++)
		s=s+month[leapy(ey)][i];
	s=s+ed;
	if(ey-sy>1)
	{
	for(int i=sy+1;i<=ey-1;i++)
		s=s+year[leapy(i)];
	}
	}
	cout<<s-1;
	
	return 0;
}
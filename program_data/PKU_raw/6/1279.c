int m[100][100];
void a()
{
	memset(m,0,sizeof(m));
	int x,y,count=0,sum=0;
	cin>>x>>y;
	int *p=m[0];
	for(;p<=m[x-1]+y-1;p++)
	{
		count++;
		cin>>*p;
		if(count==1||count==y)
			sum+=*p;
		else if(p<=m[0]+y-1)
			sum+=*p;
		else if(m[x-1]<=p&&p<=m[x-1]+y-1)
			sum+=*p;
		if(count==y)
		{
			p=p+100-y;
			count=0;
		}
	}
	cout<<sum<<endl;
}
int main()
{
	int k,i;
	cin>>k;
	for(i=0;i<k;i++)
	{
		a();
	}
	return 0;
}
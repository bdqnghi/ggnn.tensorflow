int main()
{
	char m[100];
	int count[100]={0},i=0,t=0;
	cin>>m;
	for(i=0;m[i]!='\0';i++)
	{
		if(count[t]==0)
			count[t]++;
		else if( m[i]==m[i-1] ||m[i] -m[i-1]=='A'-'a'||m[i]-m[i-1]=='a'-'A')
			count[t]++;
		else
		{
			t++;
			count[t]=1;
		}
	}
	int sum=0;
	for(i=0;i<=t;i++)
	{
		sum+=count[i];
		if(m[count[i]-1]>='A'&&m[count[i]-1]<='Z')
			;
		else
			m[count[i]-1]+='A'-'a';
		cout<<'('<<m[sum-1]<<','<<count[i]<<')';
	}
	cout<<endl;
	return 0;
}	
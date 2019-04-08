
int main()
{
	int iCase,n,i,count,a[20];
	cin>>iCase;
	while(iCase--)
	{
		count=60;
		cin>>n;
		for(i=0;i<n;i++) 
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			if(a[i]+3*i>60) break;
			if(a[i]+3*(i+1)<=60) count-=3;
			if(a[i]+3*(i+1)>60) count=a[i];
		}
		cout<<count<<endl;
	}
	return 0;
}

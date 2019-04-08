// ????
//????wayne
//?????12.30

 
char a[41];

int main()
{
	int cnt=0,n,i,length;
	cin>>n;
	cin>>a;
	cout<<a;
	cnt=strlen(a);
	for(i=1;i<n;i++)
	{
		cin>>a;
		length=strlen(a);
		cnt++;
		cnt+=length;
		if((cnt)<=80)
			cout<<" "<<a;
		else
		{
			cout<<endl;
			cout<<a;
			cnt=strlen(a);
		}
	}
	return 0;
}


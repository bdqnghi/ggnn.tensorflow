int main()
{
	int n,i=0,j=0,k=0,t=1,num=0;
	cin>>n;
	for(t=1;t<=n;t++)
	{
		char a[100001],p;
		cin>>a;
		for(i=0;i<strlen(a);i++)
		{
			p=a[i];
			for(j=0;j<strlen(a);j++)
			{
				if(p==a[j])
				{
					k++;
				}
			}
			if(k==1)
			{
				cout<<p<<endl;
				num++;
				break;
			}
			k=0;
		}
		if(num==0)
		{
			cout<<"no"<<endl;
		}
		k=0;
		num=0;
	}
	return 0;
}
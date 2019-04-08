

int main()
{
	char a[100],c=0;
	unsigned int N,i,j,k;
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>a;
		for(j=0;j<strlen(a);j++)
		{
			c=a[j];
			for(k=0;k<strlen(a);k++)
			{
				if(c==a[k]&&k!=j)
					break;
			}
			///cout<<k<<strlen(a);
			if(k==strlen(a)&&c!=a[k])
			{
				//cout<<"asdf";
				cout<<c<<endl;
				break;
			}
		}
		if(j==strlen(a)&&k!=strlen(a))
			cout<<"no"<<endl;
	}


	return 0;
}


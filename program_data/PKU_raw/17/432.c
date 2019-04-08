int main()
{
	char c[105]={0};
	while(cin>>c)
	{


		int  a[105]={0};

		int n,i,j;
		n=strlen(c);
		for(i=0;i<n;i++)
			a[i]=1;
		for(i=n-1;i>=0;i--)
		{
			if(c[i]=='(')

			{

				for(j=i;j<n;j++)
				{
					if((c[j]==')')&&(a[j]!=0))
					{
						a[j]=0;
						a[i]=0;
						break;

					}

				}

			}

		}
		for(i=0;i<n;i++)
			cout<<c[i];
		cout<<endl;

		for(i=0;i<n;i++)
		{
			if((c[i]=='(')&&(a[i]==1))

				cout<<"$";
			if((c[i]==')')&&(a[i]==1))
				cout<<"?";
			if((c[i]!='(')&&(c[i]!=')')&&(c[i]!='\0'))
				cout<<" ";
			if((c[i]=='(')&&(a[i]==0))
				cout<<" ";
			if((c[i]==')')&&(a[i]==0))
				cout<<" ";


		}

		cout<<endl;
	}


	
	return 0;

}
int main()
{
	int n,i,j,length;
	char a[100];
	cin>>n;
	cin.getline(a,90);
	for(i=1;i<=n;i++)
	{
		cin.getline(a,90);
		length=strlen(a);
		for(j=0;j<length;j++)
		{
			if(!((a[0]=='_')||((a[0]>='a')&&(a[0]<='z'))||((a[0]>='A')&&(a[0]<='Z'))))
			{
				cout<<0<<endl;
				break;
			}
			else
			{
				for(j=1;j<length;j++)
				{
					if(!(((a[j]=='_'))||((a[j]>='0')&&(a[j]<='9'))||((a[j]>='a')&&(a[j]<='z'))||((a[j]>='A')&&(a[j]<='Z'))))
					{
						cout<<0<<endl;
						break;
					}
				}
				if(j==length)
				{
					cout<<1<<endl;
				}
				break;
			}


		}
	}
	return 0;

}
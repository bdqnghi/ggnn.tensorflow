int main()
{
	int n,i,j,y[1000];
	char a[81];
	cin>>n;
	cin.get();
	for(i=0;i<1000;i++)
	{
		y[i]=0;
	}
	for(i=0;i<n;i++)
	{
		cin.getline(a,81);
		if(((a[0]-'a'<26)&&(a[0]-'a'>=0))||((a[0]-'A'<26)&&(a[0]-'A'>=0))||(a[0]=='_'))
		{
			y[i]=1;
			for(j=1;a[j]!=0;j++)
			{
				if(((a[j]-'a'<26)&&(a[j]-'a'>=0))||((a[j]-'A'<26)&&(a[j]-'A'>=0))||((a[j]-'0'<10)&&(a[j]-'0'>=0))||(a[j]=='_'))
				{
					y[i]=1;
				}
				else
				{
					y[i]=0;
					break;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<y[i]<<endl;
	}
	return 0;
}
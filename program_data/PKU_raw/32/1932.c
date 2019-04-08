int main()
{
	int n,i,j;
	cin>>n;
	cin.get();
	for(i=1;i<=n;i++)
	{
		char str1[1000],str2[1000],str3[1000],str4[1000];
		cin.getline(str1,900);
		cin.getline(str2,900);
		int a=strlen(str1);
		int b=strlen(str2);
		for(j=0;j<a;j++)
		{
			str3[j]=str1[a-j-1];
		}
		for(j=0;j<b;j++)
		{
			str4[j]=str2[b-j-1];
		}
		for(j=0;j<b;j++)
		{
			if(str3[j]>=str4[j])
				str3[j]=str3[j]-str4[j]+'0';
			else
			{
				str3[j]=10+str3[j]-str4[j]+'0';
				str3[j+1]--;
			}
		}
		for(j=a-1;j>=0;j--)cout<<str3[j];
                cout<<endl;
                cin.get();
	}
	return 0;
}

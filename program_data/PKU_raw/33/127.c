int main()
{
	int n,i,j,k,m;
	char str2[256]={0};
	char str1[256];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>str1;
		str2[255]=0;
		for(j=0;j<255&&str1[j]!='\0';j++)
		{
			if(str1[j]==65)
			{
				str2[j]=84;
			}
			if(str1[j]==84)
			{
				str2[j]=65;
			}
			if(str1[j]==67)
			{
				str2[j]=71;
			}
			if(str1[j]==71)
			{
				str2[j]=67;
			}
		}
                   str2[j]=0;
		for(k=0;k<255&&str2[k]!=0;k++)
		{
			cout<<str2[k];
		}
                  cout<<endl;
		str1[255]=0;
	}
	return 0;
}


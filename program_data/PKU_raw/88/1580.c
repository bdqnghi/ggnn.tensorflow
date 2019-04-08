//@@@@???????@@@@@@@@@@@//
//@@@@?????@@@@@@@@@@@@@@@//
//@@@@???12/11@@@@@@@@@@@@@@//
int main()
{
	char str[31];
	int i,j,l,a[31]={0};
	cin.getline(str,31);
	l=strlen(str);
    for(j='0';j<='9';j++)
	{
		if(str[0]==j)
		{
			cout<<str[0];
			a[0]=1;
			break;
		}
	}
	for(i=1;i<l;i++)
	{
		for(j='0';j<='9';j++)
		{
			if(str[i]==j)
			{
				cout<<str[i];
				a[i]=1;
				break;
			}
		}
		if(a[i-1]==1&&j=='9'+1)cout<<endl;
	}
}
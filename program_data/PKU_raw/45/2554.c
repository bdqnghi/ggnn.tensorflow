
int main()
{
	char str[30],str2[30];
	cin>>str>>str2;
	int L=strlen(str),len=strlen(str2),k=0,i;
	for (i=0;i<len;i++)
	{
		k=0;
		while(str[k]==str2[i+k]&&k<L)
		{
			k++;
		}
		if(k==L)
		{
			break;
		}
	}
	cout<<i;
	return 0;
}
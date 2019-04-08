int main()
{
	char str[1000];
	int len,sum=0;
	cin.getline(str,999,'\n');
	len=strlen(str)-1;
	int i=0;
	while(i<=len-1)
	{
		if(str[i]==' '&&str[i+1]==' ')
		{
			for(int j=i;j<=len-1;j++)
				str[j]=str[j+1];
			sum=sum+1;
			i=i-1;
		}
		i=i+1;
	}
	for(int i=0;i<=len-sum;i++)
		cout<<str[i];
	return 0;
}
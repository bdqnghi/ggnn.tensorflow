int main()//????
{
	int i,j=0,k=0,len;
	char str[31];
	char num[30][30];
	memset(num,'\0',sizeof(num));
	cin.getline(str,31);
	len=strlen(str);
	for(i=0;i<len;i++)//???????????
	{
		if(str[i]>='0' && str[i]<='9')
		{
			num[j][k]=str[i];
			k++;
		}
		else if(str[i-1]>='0' && str[i-1]<='9')
		{
			j++;
			k=0;
		}
	}
	for(i=0;i<=j;i++)//????
		cout<<num[i]<<endl;
	return 0;
}
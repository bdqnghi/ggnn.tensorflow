int main()
{
	unsigned str_1[250],str_2[250];
	char str_a[251],str_b[251];
	int len_a,len_b;
	cin.getline(str_a,251);
	cin.getline(str_b,251);
	len_a=strlen(str_a);
	len_b=strlen(str_b);
	memset(str_1,0,sizeof(str_1));
	memset(str_2,0,sizeof(str_2));
	int i,j=0;
	for(i=len_a-1;i>=0;i--)
		str_1[j++]=str_a[i]-'0';
	j=0;
	for(i=len_b-1;i>=0;i--)
		str_2[j++]=str_b[i]-'0';
	for(i=0;i<250;i++)
	{
		str_1[i]+=str_2[i];
		if(str_1[i]>=10)
		{
			str_1[i+1]++;
			str_1[i]-=10;
		}
	}
	for(i=249;i>=0;i--)
		if(str_1[i]!=0)
			break;
	if(i==-1)
		cout<<0;
	else
		for(;i>=0;i--)
			cout<<str_1[i];
	cout<<endl;
	return 0;
}

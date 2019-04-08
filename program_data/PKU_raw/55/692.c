//????
int main()
{
	int a,b,j=0;
	char str1[33],str2[33],str3[33];
	cin>>a>>str1>>b;           //????????????????
	int i=0,dec=0;
	while(str1[i]!=0)     //?????????
	{
		dec=dec*a;
		if(str1[i]<='9'&&str1[i]>='0')
			dec=dec+str1[i]-'0';
		else if(str1[i]>='A'&&str1[i]<='Z')
			dec=dec+str1[i]-'A'+10;
		else if(str1[i]>='a'&&str1[i]<='z')
		dec=dec+str1[i]-'a'+10;
		i++;
	}
	if(dec==0){
        cout<<dec<<endl;
        return 0;
    }
	while(dec!=0)         //??????b???
	{
		str3[j]=dec%b;
		if(str3[j]>9||str3[j]<0) str3[j]=str3[j]+'A'-10;
		else str3[j]+='0';
		dec=dec/b;
		j++;
	}
	for(j--;j>=0;j--)   //????
	{
		cout<<str3[j];
	}
	cout<<endl;
	return 0;
}

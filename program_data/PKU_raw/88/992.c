int main()
{
	char str[31];
	gets(str);
	int i=0;
	int num=0;
	while(str[i]!='\0'){
		if(str[i]>='0'&&str[i]<='9'){
			num=num*10+(str[i]-'0');
			if(!(str[i+1]>='0'&&str[i+1]<='9')||str[i+1]=='\0'){
				cout<<num<<endl;
				num=0;
			}
		}
		i++;
	}
	return 0;
}
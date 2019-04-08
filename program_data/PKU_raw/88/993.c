int main()
{
	char str[30];
         gets(str);
	char *p;
	p=str;
	int num=0;
	for(;*p!='\0';p++){
		if(*p>='0'&&*p<='9'){
			num=num*10+(*p-'0');
			p++;
			if(!(*p>='0'&&*p<='9')||*p=='\0'){
				cout<<num<<endl;
				num=0;
			}
			p--;
		}
	}
	return 0;
}

int main()
{
	char str[101];
	char fstr[101];
	char c=str[0];
	char*p=str,*q=fstr;
	cin.get(str,101);
	for(p,q;*(p+1)!='\0';p++,q++)
		*q=*p+*(p+1);
	*q=*p+*str;
	*(q+1)='\0';
	printf("%s\n",fstr);
	return 0;
}
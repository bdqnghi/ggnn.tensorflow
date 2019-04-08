int main(){
	char str[101];
	gets(str);
	int len=strlen(str),i;
	for(i=0;i<len;i++)
	{
		if(str[i]==' '&&str[i+1]==' ')
			continue;
		else
			cout<<str[i];
	}
	cout<<endl;
	return 0;
}

int main()
{
	int i;
	int j=0;
	char s[101];
	char d[101];
	gets(s);
	for(i=0;s[i-1];i++){
		if(s[i]==' '&&s[i+1]==' '){
			continue;
		}else {
		d[j]=s[i];
		j++;
		}
	}
	puts(d);
	return 0;
}


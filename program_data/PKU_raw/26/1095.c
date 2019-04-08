int main()
{
	char s[100];
	gets(s);
	int a,i,j;
	int b;
	b=a=strlen(s);
	for(i=1;i<a;){
		if(s[i]==' '&&s[i-1]==' '){
			for(j=i;j<b-1;j++){
				s[j]=s[j+1];
			}
			b--;
		}
		else{i++;
		}
	}
	s[b]='\0';
	puts(s);
	return 0;
}
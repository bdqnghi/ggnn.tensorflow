int main()
{
    int n=0,i,j,k,l;
	char str[101]={'\0'};
    gets(str);
	l=strlen(str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			for(j=i+1;str[j]==' ';j++);
			l-=j-i-1;
			for(k=i+1;k<l;k++)
				str[k]=str[k+j-i-1];
			str[k]='\0';
		}
	}
	printf("%s",str);
	return 0;
}

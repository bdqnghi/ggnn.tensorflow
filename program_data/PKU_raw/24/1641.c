int main()
{
	char str[1000];
	char *len[300],*max,*min;
	int i,j=0,k;
	gets(str);
	len[0]=str;
	j++;
	for(i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			str[i]='\0';
			len[j]=str+i+1;
			j++;
		}		
	}
	max=len[0];
	min=len[0];
	for(k=0;k<j;k++){
	    if(strlen(len[k])>strlen(max))
	    max=len[k];
	    if(strlen(len[k])<strlen(min))
	    min=len[k];
     }
		printf("%s\n%s",max,min);
		
	return 0;
}
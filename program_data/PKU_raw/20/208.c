int main()
{
	char from[100];
	char to[100];
	while(1){
		int max=0;
		char str[1000];
		cin.getline(str,999);
		if (str[0]=='\0') {return 0;}
		int lenstr=strlen(str);
		if (lenstr==0) {return 0;};
		int i;
		for(i=0;i<lenstr;i++){
			if (str[i]==' ') {break;}
			from[i]=str[i];			
		}
		from[i]='\0';
		int k;
		k=0;
		for(++i;i<lenstr;i++){
			to[k]=str[i];
			k++;
		}
		to[k]='\0';
		int len;
		len=strlen(from);
		int maxpos=0;
		for(i=0;i<len;i++)
		{
			if (from[i]>max) {max=from[i];maxpos=i;}
		}
		int j;
		for(j=0;j<=maxpos;j++){
			printf("%c",from[j]);
		}
		for (i=0;to[i]!='\0';i++){
			printf("%c",to[i]);
		}
		
		for(;from[j]!='\0';j++){
			printf("%c",from[j]);
		}
		printf("\n");
		
	}
	return 0;
}

int main() 
{
    char Sen[200],word[200],exchange[200],temp[200];
	gets(Sen);
	gets(word);
	gets(exchange);
	int n=strlen(Sen),i;
	int m;
	m=0;
	for(i=0;i<n;i++){
		if(Sen[i]!=' '){
			temp[m]=Sen[i];
			m++;
		}
		else{
			temp[m]='\0';
			if(strcmp(temp,word)==0)
				printf("%s ",exchange);
			else
				printf("%s ",temp);
			m=0;
		}
		if(i==n-1){
			temp[m]='\0';
			if(strcmp(temp,word)==0)
				printf("%s\n",exchange);
			else
				printf("%s\n",temp);
			m=0;
		}

	}
}   

int main()
{
	int i,a=0,b=0;
	char zfc[101],y[101],x[101],word[101][101];
	gets(zfc);
	gets(y);
	gets(x);
	for(i=0;zfc[i]!='\0';i++){
		if(zfc[i]!=' '){
			word[a][b]=zfc[i];
			b++;
		}else{
			word[a][b]='\0';
			b=0;
			a++;
		}
	}
	word[a][b]='\0';
	for(i=0;i<=a;i++){
		if(strcmp(word[i],y)==0){
			strcpy(word[i],x);
		}
	}
	for(i=0;i<a;i++){
		printf("%s ",word[i]);
	}
	printf("%s\n",word[a]);
	return 0;
}
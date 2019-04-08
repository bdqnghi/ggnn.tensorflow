int main()
{
	char str[300];
	gets(str);
	int tag=0,sz[126]={0};
	int i;
	for(i=0;str[i]!='\0';i++){
		if(((str[i]>='A')&&(str[i]<='Z'))||((str[i]>='a')&&(str[i]<='z'))){
			sz[str[i]]++;
			tag=1;
		}
	}
	for(i='A';i<='Z';i++){
		if(sz[i]!=0){
			printf("%c=%d\n",i,sz[i]);
		}
	}
	for(i='a';i<='z';i++){
		if(sz[i]!=0){
			printf("%c=%d\n",i,sz[i]);
		}
	}
	if(tag==0){
		printf("No");
	}
	return 0;
}
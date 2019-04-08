int main()
{
	char str[300],e;
	int i,n,zc,x=1;
	scanf("%s",str);
	n=strlen(str);
	for(e='A';e<='Z';e++){
		zc=0;
		for(i=0;i<n;i++){
			if(str[i]==e){
				zc++;
			    x=0;}
		}
		if(zc!=0){
			printf("%c=%d\n",e,zc);}
	}
	for(e='a';e<='z';e++){
		zc=0;
		for(i=0;i<n;i++){
			if(str[i]==e){
				zc++;
			    x=0;}
		}
		if(zc!=0){
			printf("%c=%d\n",e,zc);}
	}
	if(x){
		printf("No");}
	return 0;
}
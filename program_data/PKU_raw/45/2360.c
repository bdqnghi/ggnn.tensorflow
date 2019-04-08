int main()
{
	int i,k;
	char s[51];
	char w[51];
	scanf("%s%s",s,w);
	char oow[51][51]={'\0'};
	int lens,lenw;
	lens=strlen(s);
	lenw=strlen(w);
	for(i=0;i<=lenw-lens;i++){
		for(k=i;k<=i+lens-1;k++){
			oow[i][k-i]=w[k];
		}
	}
	for(i=0;i<=lenw-lens;i++){
		if(strcmp(s,oow[i])==0){
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}
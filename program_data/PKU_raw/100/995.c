int main()
{
	

	int num[26]={0};
	char zfc[LEN];
	int len,i,flag;
	scanf("%s",zfc);
     len=strlen(zfc);
	for(i=0;i<len;i++){
		if(zfc[i]>='a'&&zfc[i]<='z'){
			num[zfc[i]-'a']++;
		}
	}
    flag=1;
	for(i=0;i<26;i++){
		if(num[i]!=0){
			printf("%c=%d\n",'a'+i,num[i]);
			flag=0;
		}
	}
	if(flag){
		printf("No");
	}
    
	return 0;

}

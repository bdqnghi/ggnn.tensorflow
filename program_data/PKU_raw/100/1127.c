int main()
{
	int len=0,i,t=0;
	int num[26]={0};
	char zfc[300];
	char c;
    len=strlen(zfc);
	scanf("%s",zfc);
    for (i=0;zfc[i]!=0;i++){
		if (zfc[i]>='a'&&zfc[i]<='z'){
			num[zfc[i]-'a']++;
		}
	}
	for (c='a'; c<='z'; c++ ){
		if(num[c-'a']!=0){
			printf("%c=%d\n",c,num[c-'a']);
			t=1;
		}
	}
		if (t==0){
		printf("No");
         }
	return 0;
}

int main(){
	int i,j,n;
	char s[1001];
	scanf("%d",&n);
	for(j=0;j<n;j++){
		int freq[27]={0};
		int flag=0;
    	scanf("%s",s);
    	for(i=0;i<strlen(s);i++){
    		freq[s[i]-97]++;
		}
    	for(i=0;i<strlen(s);i++){
    		if(freq[s[i]-97]==1){
	    		printf("%c\n",s[i]);
	    		flag=1;
	    		break;
			}
		}
    	if(flag==0){
	    	printf("no\n");
		}
	}
	return 0;
}

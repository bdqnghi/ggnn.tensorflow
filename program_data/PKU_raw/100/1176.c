int main(){
	int sum[26],i,n=0;
	char str[301];
	scanf("%s",&str);
	for(i=0;i<26;i++)
		sum[i]=0;
	for(i=0;i < strlen(str);i++){
		if(('a'<=str[i])&&(str[i]<='z')){
			sum[str[i]-'a']++;
			n=1;
		}
	}
	for(i=0;i<26;i++){
		if(sum[i]!=0)
			printf("%c=%d\n",i+'a',sum[i]);
		}
		if(n==0)
			printf("No");
		return 0;
	}
		

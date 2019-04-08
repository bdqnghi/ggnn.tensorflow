int main()
{
	char s[3000];
	int i,n,j=0,word=0;
	int len[300];
	gets(s);
	for(i=0;i<300;i++){
		len[i]=0;
	}
	n=strlen(s);
	for(i=0;i<n;i++){
		if(s[i]!=' '){
			word=0;
			len[j]++;
		}
		else{
			if(word==0){
				j++;
				word=1;
			}
		}
	}

	for(i=0;i<j;i++){
		printf("%d,",len[i]);
	}
	printf("%d",len[i]);
	return 0;
}


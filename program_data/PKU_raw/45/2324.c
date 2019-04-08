int main(){
	int len1,len2,i,a,count;
	char word1[51],word2[51];
	scanf("%s",&word1);
	scanf("%s",&word2);
	len1=strlen(word1);
	len2=strlen(word2);
	for(i=0;i<len2;i++){
		count=0;
		if(word1[0]==word2[i]){
			for(a=0;a<len1;a++){
				if(word1[a]==word2[i+a])
					count++;
			}
		}
		if(count==len1){
			printf("%d\n",i);
                           return 0;
		}
	}
	return 0;
}
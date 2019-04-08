int main(){
	char s[50];
	char w[50];
	int result=0,len1,len2,i,j;
	scanf("%s",s);
	scanf("%s",w);
	len1=strlen(w);
	len2=strlen(s);
	for(i=0;i<len1;i++){
		if(w[i]==s[0]){
			for(j=i;j<i+len2&&j<len1;j++){
				if(w[j]!=s[j-i]){
					result=1;
				}				
			}
			if(result==0){printf("%d",i);return 0;}
		}

	}

 return 0;
}


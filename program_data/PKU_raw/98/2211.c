int main(){
	int n,i,j,sum;
	char word[40];
	scanf("%d\n",&n);
	scanf("%s",word);
	printf("%s",word);
	sum=strlen(word);
	for(i=1;i<n;i++){
		for(j=0;j<40;j++){
			word[j]='\0';
		}
        scanf("%s",word);
		if(sum+strlen(word)+1<=80){
			printf(" %s",word);
			sum=sum+strlen(word)+1;
		}else{
			printf("\n%s",word);
			sum=strlen(word);
		}
	}
	return 0;
}
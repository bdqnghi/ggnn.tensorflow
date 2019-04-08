
int main(){
	char word[42];
	int chars_left,word_length,word_num;

	scanf("%d",&word_num);
	scanf("%s",&word);
	printf("%s",word);
	word_num--;
	word_length=strlen(word);
	chars_left=80-word_length;
	while(word_num!=0){
		scanf("%s",&word);
		word_length=strlen(word);
		if(chars_left<word_length+1){
			printf("\n%s",word);
			chars_left=80-word_length;
		}
		else{
			printf(" %s",word);
			chars_left=chars_left-word_length-1;
		}
        word_num--;
	}
	return 0;
}

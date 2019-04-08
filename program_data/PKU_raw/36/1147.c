

int main(int argc, char* argv[])
{
	char w1[100],w2[100];
	char letter;
	int count1[52],count2[52];
	int i;

	scanf("%s",w1);
	scanf("%s",w2);

	for(letter='A';letter<='Z';letter++){
		for(i=0,count1[letter-'A']=0;i<strlen(w1);i++){
			if(letter==w1[i]){
	count1[letter-'A']++;}}}
	for(letter='a';letter<='z';letter++){
		for(i=0,count1[letter-'a'+26]=0;i<strlen(w1);i++){
			if(letter==w1[i]){
	count1[letter-'a'+26]++;}}}

	for(letter='A';letter<='Z';letter++){
		for(i=0,count2[letter-'A']=0;i<strlen(w2);i++){
			if(letter==w2[i]){
	count2[letter-'A']++;}}}
	for(letter='a';letter<='z';letter++){
		for(i=0,count2[letter-'a'+26]=0;i<strlen(w2);i++){
			if(letter==w2[i]){
	count2[letter-'a'+26]++;}}}

	for(i=0;i<=51;i++){
		if(count1[i]!=count2[i]){
	printf("NO");
	break;}}

	if(i==52) printf("YES");
	return 0;
}
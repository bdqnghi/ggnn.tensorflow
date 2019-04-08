int main()
{
	char s[10000];
	int n, i, a = 0, b = 100, a1, b1, sum = 0, t;
	gets(s);
	t = strlen(s);
	for(i = 0; i <= t;i++){
		
		if(s[i] != ' ' && s[i] != '\0'){
			sum = sum + 1;
		}
		else if(s[i] == ' ' || s[i] == '\0'){
			if(sum > a){
				a = sum;
				a1 = i - sum;
			}
			if(sum < b){
				b = sum;
				b1 = i - sum;
				
			}
			sum = 0;
			s[i] = '\0';
		}
	}
	printf("%s\n", s+a1);
	printf("%s\n", s+b1);


	return 0;

}

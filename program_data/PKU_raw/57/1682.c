int main(){
	int n,suffixlen;
	char word[40],*p;
	scanf("%d", &n);
	for(int i =0; i<n; i++){
		scanf("%s", word);
		for(p = word;*p;p++);
		switch(*(p-1))
		{
			case'r':suffixlen = 2;break;
			case'y':suffixlen = 2;break;
			case'g':suffixlen = 3;break;
		}
		*(p-suffixlen) ='\0';
		printf("%s\n",word);
	}
		return 0;
}
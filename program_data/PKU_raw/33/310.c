int main(){
	char s[1000];
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%s", &s);
		for(int j=0; j<strlen(s); j++){
			if(j<strlen(s)-1&&s[j]=='A')
				printf("T");
			if(j<strlen(s)-1&&s[j]=='T')
				printf("A");
			if(j<strlen(s)-1&&s[j]=='G')
				printf("C");
			if(j<strlen(s)-1&&s[j]=='C')
				printf("G");
			if(j==strlen(s)-1){
				if(s[j]=='A')
					printf("T\n");
				if(s[j]=='T')
					printf("A\n");
				if(s[j]=='G')
					printf("C\n");
				if(s[j]=='C')
					printf("G\n");
			}
		}
	}
	return 0;
}


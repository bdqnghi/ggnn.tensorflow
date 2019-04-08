int main()
{
	int i, j, n, l;
	char s[300];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%s", &s);
		l=strlen(s);
		for(j=0;j<l;j++){
			if(s[j]=='A'){
				s[j]=s[j]+19;
			}
			else if(s[j]=='T'){
				s[j]=s[j]-19;
			}
			else if(s[j]=='C'){
				s[j]=s[j]+4;
			}
			else{
				s[j]=s[j]-4;
			}
		}
		printf("%s\n", s);
	}
	return 0;
}

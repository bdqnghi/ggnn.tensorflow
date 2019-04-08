int main()
{	char n[31];
	int i,u;
	gets(n);
	for(i=0;i<strlen(n);i++){
		if(n[i]<='9'&&n[i]>='0'){
		printf("%c",n[i]);
		u=1;
		}
		else{
			if(u)
				printf("\n");
			u=0;
		}
	}
	return 0;
}

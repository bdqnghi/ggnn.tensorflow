int main(){
	char num[101],t[101];
	int s[101];
	int k,j;
	int len;
	int aa;

	while(gets(num)){
		strcpy(t,num);
		len=strlen(num);
		for(k=0;k<len;k++){
			s[k]=1;
		}
		for(k=0;k<len;k++){
			if(num[k]==')'){
				for(j=k-1;j>=0;j--){
					if(num[j]=='('){
						s[j]=0;
						s[k]=0;
						num[j]=0;
						break;
					}
				}
			}
		}
		printf("%s\n",t);
		for(aa=0;aa<len;aa++){
			if(s[aa]==1&&t[aa]=='(')
				printf("$");
			else if(s[aa]==1&&t[aa]==')')
				printf("?");
			else
				printf(" ");
		}
		printf("\n");
	}
}
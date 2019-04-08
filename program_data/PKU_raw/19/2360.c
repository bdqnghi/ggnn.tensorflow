char s[100],a[100],b[100],ns[100][100],result[100];
int number[50];
int main()
{
	int i=0,j=0,k=0;
	gets(s);
	gets(a);
	gets(b);
	for(i=0;i<strlen(s);i++){
		if(s[i]!=' '){
			ns[j][k++]=s[i];
		}
		else{
			j++;
			k=0;
		}
	}
	for(i=0;i<=j;i++){
		if(!strcmp(ns[i],a)){
			strcpy(ns[i],b);
		}
	}
	for(i=0;i<j;i++){
		printf("%s ",ns[i]);
	}
	printf("%s",ns[j]);
	return 0;
}



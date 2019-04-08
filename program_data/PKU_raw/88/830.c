int main(){
	int i,sum=0,f=1;

	char *p=(char *)malloc(sizeof(char)*100);
	gets(p);
	for (i=0;i<strlen(p);i++)
		if (*(p+i)>=48 && *(p+i)<=57) {
			f=0;sum=0;printf("%c",*(p+i));
		}
		else {
			sum++;
			if (sum==1 && f==0) printf("\n");
		}
	free(p);
}

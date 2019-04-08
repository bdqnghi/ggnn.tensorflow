int main(){
	int *t,i,j,n,is[10000];
	char a[81];
	char *p;
	t=is;
	for (i=1;i<=100;i++) *(t+i)=1;
	scanf("%d\n",&n);
	for (i=1;i<=n;i++){
		gets(a);
		p=a;
		if (*p<65 || *p>90 && *p<97 && *p!=95 || *p>122) *(t+i)=0;
		for (j=1;j<strlen(a);j++)
			if (*(p+j)<48 || *(p+j)>57 && *(p+j)<65 || *(p+j)>90 && *(p+j)<97 && *(p+j)!=95 || *(p+j)>122) *(t+i)=0;

	}
	for (i=1;i<=n;i++)
		printf("%d\n",*(t+i));
	

}
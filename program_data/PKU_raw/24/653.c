int main(){
	char a[50][20];
	char b,c[50],d[50];
	int i,j;
	for(i=0;;i++){
		scanf("%s",a[i]);
		scanf("%c",&b);
		if(b=='\n'){
			j=i;
			break;}}
	strcpy(c,a[0]);
	strcpy(d,a[0]);

	for(i=0;i<=j;i++){
		if(strlen(a[i])>strlen(c))
			strcpy(c,a[i]);
		if(strlen(a[i])<strlen(d))
	         strcpy(d,a[i]);
	}
	printf("%s\n%s\n",c,d);
	return 0;
} 
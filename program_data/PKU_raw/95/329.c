
int main()
{
	char a[100],b[100];
	int i,j;
	gets(a);
	gets(b);
	for(j=0;a[j]!='\0';j++){
		for(i='a';i<='z';i++){
		if(a[j]==i)
			a[j]=i-'a'+'A';
		}
	}
	for(j=0;b[j]!='\0';j++){
		for(i='a';i<='z';i++){
		if(b[j]==i)
			b[j]=i-'a'+'A';
		}
	}
	if(strcmp(a,b)>0)
	printf(">");
	if(strcmp(a,b)<0)
	printf("<");
	if(strcmp(a,b)==0)
	printf("=");
	return 0;
}


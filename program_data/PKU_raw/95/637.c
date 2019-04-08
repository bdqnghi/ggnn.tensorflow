int main()
{
	int i, al, bl;
	char a[100],b[100];
	gets(a);
	gets(b);
	al = strlen(a);
	bl = strlen(b);
	for(i=0;i<al;i++){
		if(a[i]>='a'&&a[i]<='z')
			a[i] = (char)((int)a[i]-32);
	}
	for(i=0;i<bl;i++){
		if(b[i]>='a'&&b[i]<='z')
			b[i] = (char)((int)b[i]-32);
	}
	if(strcmp(a,b)==0)
		printf("=");
	else if(strcmp(a,b)>0)
		printf(">");
	else
		printf("<");
	return 0;
}
	
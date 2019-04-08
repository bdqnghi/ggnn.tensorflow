void main()
{
	char s[20]={'\0'},w[20]={'\0'};
	int i,j,num;
	char *p;
	scanf ("%s %s",s,w);
	p=strstr(w,s);
	*p='!';
	for (i=0;i<strlen(w);i++)
		if (w[i]=='!') {num=i;break;}

	printf("%d\n",num);
}

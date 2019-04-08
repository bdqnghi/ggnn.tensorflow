
char trans(char k)
{
	if((k>='a')&&(k<='z'))
		return(k+'A'-'a');
	else return(k);
}

main()
{
	char a[100],b[100];
	int i,l1,l2,n=0;

	gets(a);
	gets(b);
	l1=strlen(a);l2=strlen(b);

	for(i=0;(i<l1)&&(i<l2);i++){
		a[i]=trans(a[i]);
		b[i]=trans(b[i]);
		if(a[i]!=b[i])
		{
				if(a[i]>b[i]) printf(">");
				else printf("<");
				n++;
				break;
		}
	}

	if(n==0)
		printf("=");
}
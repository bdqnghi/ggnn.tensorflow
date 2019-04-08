int main()
{
	char *p1,*p2;
	int l1,l2,i,l;
	p1=(char*)malloc(sizeof(int)*80);
	p2=(char*)malloc(sizeof(int)*80);
	gets(p1);
	gets(p2);
	l1=strlen(p1);
	l2=strlen(p2);
	l=(l1>l2)? l1: l2;
	for(i=0;i<l;i++)
	{
		if(p1[i]>='A' && p1[i]<='Z')
			p1[i]=p1[i]-'A'+'a';
		if(p2[i]>='A' && p2[i]<='Z')
			p2[i]=p2[i]-'A'+'a';
	}
	if(strcmp(p1,p2)>0)
		printf(">\n");
	else if(strcmp(p1,p2)==0)
		printf("=\n");
	else 
		printf("<\n");
	free(p1);
	free(p2);
	return 0;
}
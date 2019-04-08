void main()
{
	char l1[80],l2[80];
	int i=0,a=0,b=0;
	gets(l1);
	gets(l2);
	for(i=0;i<80;i++)
	{
		if(l1[i]>='A'&&l1[i]<='Z')
			l1[i]=l1[i]+32;
		if(l2[i]>='A'&&l2[i]<='Z')
			l2[i]=l2[i]+32;
	}
if(strcmp(l1,l2)>0) printf(">");
	if(strcmp(l1,l2)<0) printf("<");
	if(strcmp(l1,l2)==0) printf("=");
}
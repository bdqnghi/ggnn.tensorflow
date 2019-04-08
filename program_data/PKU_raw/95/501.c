int main()
{
	int i;
	char c1[80],c2[80];
	gets(c1);
	gets(c2);
	for(i=0;c1[i]!='\0';i++)
	{
		if(c1[i]>=97&&c1[i]<=122)
			c1[i]=c1[i]-32;
		if(c2[i]>=97&&c2[i]<=122)
			c2[i]=c2[i]-32;
	}
	if(strcmp(c1,c2)==0)
		printf("=");
	if(strcmp(c1,c2)<0)
		printf("<");
	if(strcmp(c1,c2)>0)
		printf(">");
	return 0;
}

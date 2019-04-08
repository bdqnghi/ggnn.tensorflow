
void main()
{
	char s[50],w[50];
	int i;
	char *p1,*p2,*p;


	scanf("%s %s",s,w);
	p1=s;
	p2=w;
	p=strstr(p2,p1);

	for(i=0;i<50;i++)
		if(*p==w[i])
		{
			printf("%d",i);
			break;
		}
}




int n1,n2,n3;
char str1[100],str2[100],str3[100];
int f(char *p)
{
	int m,n;
	n=0;
    char *f;
	f=p;
	for(m=0;m<n2;m++)
	{
		if((*f)==str2[m])
		{	n++;}
		f++;
	}
	if(n==n2) return 1;
	else return 0;
}
int m(char *p)
{
	if(*p>='a'&&*p<='z') return 1;
	else if(*p>='A'&&*p<='Z') return 1;
	else return 0;
}
void main()
{
	gets(str1);n1=strlen(str1);
	scanf("%s",str2);n2=strlen(str2);
	scanf("%s",str3);n3=strlen(str3);
	int i=0,j;
	char *p1,*p2;
	p1=str1;
	for(i=0;(p1-str1)<n1;i++,p1++)
	{
		p2=p1+n2;
		if((f(p1)==1)&&(m(p1-1)==0)&&(m(p2)==0))
		{
			for(j=0;j<n3;j++)
				printf("%c",str3[j]);
			p1=p1+n2-1;
		}
		else
		{
			printf("%c",*p1);
		}
	}
}
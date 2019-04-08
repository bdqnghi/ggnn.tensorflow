void cha(char str[100])
{
	char substr[10],res[1000],giant,*p,*q,*t;
	int i,max,n,m;
	scanf("%s",substr);
	n=strlen(str);
	max=0;
	p=str;
	giant=*p;
	for(i=0;i<n;i++)
	{
		if(*(p+i)>giant)
		{
			giant=*(p+i);
            max=i;
		}
	}
	p=str;
	q=res;
	t=substr;
	m=strlen(substr);
	strncpy(q,p,max+1);
	strcpy(q+max+1,t);
	strcpy(q+max+m+1,p+max+1);
	puts(res);
}
void main()
{
   char str[100];
   while(scanf("%s",str)!=EOF)
	   cha(str);
}

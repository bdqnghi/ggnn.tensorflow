void main()
{
	char a[300],*p;
	int i,j,m=0;
	gets(a);
	for (i=97;i<123;i++)
	{for(j=0,p=a;(*p)!='\0';p++)
	{if ((*p)==i) j++;}
	if (j!=0) {printf("%c=%d\n",i,j);m++;}}
	if (m==0) printf("No\n");
}
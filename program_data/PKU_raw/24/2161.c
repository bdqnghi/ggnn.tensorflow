struct strnu {char a[50];int n;}t[200];
int max(struct strnu e[200],int p)
{
	int i,mx=e[0].n,k=0;
	for(i=0;i<=p;i++)
	{
		if(e[i].n>mx)
		{mx=e[i].n;k=i;}
	}return k;
}
int min(struct strnu e[200],int p)
{
	int i,mn=e[0].n,k=0;
	for(i=0;i<=p;i++)
	{
		if(e[i].n<mn)
		{mn=e[i].n;k=i;}
	}return k;
}

	
void main()
{	int i;
	char b;
	for(i=0;;i++)
	{
		scanf("%s",t[i].a);
		b=getchar();
		t[i].n=strlen(t[i].a);		
		if(b=='\n')break;
	}
	printf("%s\n",t[max(t,i)].a);
	printf("%s",t[min(t,i)].a);
}

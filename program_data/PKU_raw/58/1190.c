int main()
{
char (*pi)[81];
int i,m,n,j,ok=0;
scanf("%d",&n);
pi=(char(*)[81])calloc(n,sizeof(char)*81);
gets(*pi);
for (i=0;i<n;i++)
{
    gets(*(pi+i));
	ok=1;
	m=strlen(*(pi+i));
	if ((*(*(pi+i))>='A'&&*(*(pi+i))<='Z')||(*(*(pi+i))>='a'&&*(*(pi+i))<='z')||(*(*(pi+i))=='_'))
		for (j=1;j<m;j++)
			if ((*(*(pi+i)+j)>='A'&&*(*(pi+i)+j)<='Z')||(*(*(pi+i)+j)>='a'&&*(*(pi+i)+j)<='z')||(*(*(pi+i)+j)=='_')||(*(*(pi+i)+j)>='0'&&*(*(pi+i)+j)<='9'))
				;
			else
				ok=0;
	else
		ok=0;
    printf("%d\n",ok);
}
free(pi);
return 0;
}
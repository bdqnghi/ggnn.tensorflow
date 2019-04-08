int main()
{
	char str[100][100],str1[100],str2[100],(*p)[100];
	int i,j,k;
	for(i=0;;i++)
	{scanf("%s",str[i]);k=i;
	if(getchar()=='\n') break;}
    p=str;
	gets(str1);
	gets(str2);
    for(i=0;i<=k;i++)
	{if(strcmp(*(p+i),str1)==0) strcpy(*(p+i),str2);}
	for(i=0;i<=k;i++)
	{if(i<k)printf("%s ",*(p+i));
	else printf("%s",*(p+i));}
}
void main()
{
char str[10],substr[3],res[15],max;
int i,j,l,k;
while(scanf("%s %s",str,substr)!=EOF)
{
	l=strlen(str);max=str[0];
	for(i=0;i<l;i++)
    if(max<str[i]) max=str[i];
	for(i=0;i<l;i++)
	{if(str[i]!=max) res[i]=str[i];
	else {res[i]=str[i];i++;break;}}
	for(j=0;j<3;j++)
		res[i+j]=substr[j];
	for(;i<l;i++)
        res[i+j]=str[i];
	for(k=0;k<i+j;k++)
	printf("%c",res[k]);
	printf("\n");
}
}
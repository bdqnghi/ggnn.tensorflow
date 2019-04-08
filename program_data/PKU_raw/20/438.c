void f(char str[],char substr[]);
void main()
{
	char str[15],substr[4];
	while (scanf("%s%s",str,substr)!=EOF) 
	{
	f(str,substr);
	}
}
void f(char str[],char substr[])
{
	int i,j,k,l;
	char a;
	l=strlen(str);
	a=str[0];
	for(i=1;i<l;i++)
	   if(str[i]>a) a=str[i];
	for(i=0;i<l;i++)
	   if(str[i]==a) break;
	for(j=l+3;j>i+3;j--) str[j]=str[j-3];
	for(j=i+1,k=0;k<3;j++,k++) str[j]=substr[k];
	printf("%s\n",str);
}

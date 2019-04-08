void main()
{
    int panduan(char s[],int l);
    int n,i,l;
    char s[21];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%s",s);
    	l=strlen(s);
    	if(panduan(s,l)>0)
    	printf("yes\n");
    	else
    	printf("no\n");
    }
}
int panduan(char s[],int l)
{
	int j;
	if((s[0]<'A')||(s[0]>'Z'&&s[0]<'_')||(s[0]>'_'&&s[0]<'a')||(s[0]>'z'))
	return(0);
	else
	{
	for(j=1;j<l;j++)
	
	if((s[j]<'0')||(s[j]>'9'&&s[j]<'A')||(s[j]>'Z'&&s[j]<'_')||(s[j]>'_'&&s[j]<'a')||(s[j]>'z'))
	{return(0);break;}
	return(1);
	
	}
}
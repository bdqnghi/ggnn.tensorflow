int main()
{
    char s[80],p[80] ;
    int length,i,t; 
	gets(s);
	gets(p);
    length=strlen(s);
    for(i=0;i<length;i++)
	{
		if(s[i]<='z' && s[i]>='a') 
        s[i]-=32; 
    } 
	length=strlen(p);
	 for(i=0;i<length;i++)
	{
		if(p[i]<='z' && p[i]>='a') 
        p[i]-=32; 
    } 
	 t=strcmp(s,p);
	if(t==1)
		printf(">\n");
	if(t==-1)
		printf("<\n");
	if(t==0)
		printf("=\n");
	return 0;
}
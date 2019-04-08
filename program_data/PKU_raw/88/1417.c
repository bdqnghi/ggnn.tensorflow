/* Note:Your choice is C IDE */
void main()
{char s[100];int i,flag1=-1,flag2=-1,m;
	gets(s);
	m=strlen(s);
	for(i=0;i<m;i++)
	{
		if(s[i]>='0'&&s[i]<='9') printf("%c",s[i]);
		if((s[i]>='0'&&s[i]<='9')&&(!(s[i+1]>='0'&&s[i+1]<='9'))) printf("\n");  
}}
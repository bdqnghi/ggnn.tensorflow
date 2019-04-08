 void main ()
{
	char a[300];
	int i,b[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},m,yes=0;
	
	scanf("%s",a);
m=strlen(a);
	
for(i=0;i<m;i++)
{if(a[i]>='a'&&a[i]<='z'){yes=1;
b[a[i]-'a']++;}}
if(yes==0)
printf("No\n");
for(i=0;i<26;i++)
{	if(b[i]!=0)
{printf("%c=%d\n",(i+'a'),b[i]);}
}

	
}
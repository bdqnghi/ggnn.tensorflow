int main()
{
	int a=0,b=0,i,s,j=0,c=0,d=0,l,m,n,k=0,w;
	char str[100];
	
	for(;;)
	{
	gets(str);
	if(feof(stdin)) break;
    l=strlen(str);
	for(i=0;i<=l-1;i++)
	{printf("%c",str[i]);}
	for(i=0;i<=l-1;i++)
	{	
	if(str[i]=='(') {a=a+1; b=1;}
	else if(str[i]==')' && b==0) {str[i]='?';}
	else if(str[i]==')' && b==1 && a<=0) {str[i]='?';}
	else if(str[i]==')' && b==1 && a>0) {a=a-1;}
	}
    a=0;
	b=0;
	for(i=l-1;i>=0;i--)
	{	if(str[i]==')') {a=a+1; b=1;}
	else if(str[i]=='(' && b==0) {str[i]='$';}
	else if(str[i]=='(' && b==1 && a<=0) {str[i]='$';}
	else if(str[i]=='(' && b==1 && a>0) {a=a-1;}
	}
	printf("\n");
        for(i=0;i<=l-1;i++) {if(str[i]!='?' && str[i]!='$') str[i]=' ';}
	for(i=0;i<=l-1;i++) {printf("%c",str[i]);}
        printf("\n");
        }
return 0;
}
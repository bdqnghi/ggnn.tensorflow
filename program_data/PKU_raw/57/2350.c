void main()
{int cases,i=0;
char str[100];
scanf("%d",&cases);
while(cases>0)
{ scanf("%s",str);
int n;
n=strlen(str);
if((str[n-2]=='e'&&str[n-1]=='r')||(str[n-2]=='l'&&str[n-1]=='y'))
{
	for(i=0;i<(n-2);i++)
	printf("%c",str[i]);
	
}
if(str[n-3]=='i'&&str[n-2]=='n'&&str[n-1]=='g')
{
	for(i=0;i<(n-3);i++)
	printf("%c",str[i]);
	
}
printf("\n");
cases--;
}
}

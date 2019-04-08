void main()
{
int n,i,j,len;
char a[100];
scanf("%d",&n);
for(i=0;i<=n;i++)
{gets(a); 
len=strlen(a);
if (a[len-1]=='r'||a[len-1]=='y')
{
	for(j=0;j<=len-3;j++)
		printf("%c",a[j]);
}
else if(a[len-1]=='g')
{
	for(j=0;j<=len-4;j++)
		printf("%c",a[j]);
}
else for(j=0;j<=len-1;j++)
printf("%c",a[j]);
 printf("\n");
}
}

void main()
{char  s[100];
char a[100][30];
int l,i,j=0,k=0;
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
	if(s[i]!=' ') {a[j][k]=s[i];k++;} 
	if(s[i]==' ') {j++;k=0;}
}
printf("%s",a[j]);
for(i=j-1;i>=0;i--)
printf(" %s",a[i]);
}
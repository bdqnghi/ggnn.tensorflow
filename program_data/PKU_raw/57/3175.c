int main()
{
	int n,i,j;
char a[]="er",b[]="ly",c[]="ing",d[]="\0";
struct
{
char s[30];
}p[60];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",p[i].s);
}
for(i=0;i<n;i++)
	for(j=0;j<strlen(p[i].s);j++)
	{
	if(strcmp((p[i].s+j),a)==0)
		strcpy((p[i].s+j),d);
	else if(strcmp((p[i].s+j),b)==0)
		strcpy((p[i].s+j),d);
	else if(strcmp((p[i].s+j),c)==0)
		strcpy((p[i].s+j),d);
	}
	for(i=0;i<n;i++)
		printf("%s\n",p[i].s);
	return 0;
}
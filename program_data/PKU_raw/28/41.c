void main()
{
char a[300][20];
int i,len[300],l;
for(i=0;scanf("%s",a[i])!=EOF;i++)
len[i]=strlen(a[i]);
l=i;
for(i=0;i<l;i++)
{
	printf("%d",len[i]);
	if(i!=l-1)
	printf(",");
	}
printf("\n");
}
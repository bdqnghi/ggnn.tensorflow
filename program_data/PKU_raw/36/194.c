
void change(char aa[])
{
	int len,i,j;
	char cha;
	len=strlen(aa);
	for (i=0;i<len-1;i++)
		for(j=len-2;j>=i;j--)
			if (aa[j]>aa[j+1])
			{
				cha=aa[j];
				aa[j]=aa[j+1];
				aa[j+1]=cha;
			}
}

void main()
{
	int i,j;
	char a[1000],b[1000];
	scanf("%s %s",a,b);
	change(a);
	change(b);
	if(strcmp(a,b)==0) printf("YES\n");
	else printf("NO\n");
}
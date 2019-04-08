char st[50][33],src[33];
int n,i;
void del();
int main()
{
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
	 scanf("%s",&st[i]);
	 del();
	 printf("%s\n",src);
	 memset(src,0,20);
	}
	return 0;
}
void del()
{
	char str1[3]={'e','r'},str2[3]={'l','y'},str3[4]={'i','n','g'},str[4];
    int len;
	len=strlen(st[i]);
	strcpy(str,st[i]+len-2);
	if (strcmp(str1,str)==0)
		strncpy(src,st[i],len-2);
	else if (strcmp(str2,str)==0)
		strncpy(src,st[i],len-2);
	else {
		strcpy(str,st[i]+len-2);
		if (strcmp(str3,str)==0);
		strncpy(src,st[i],len-3);
	}
	return;
}
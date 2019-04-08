int main(int argc, char* argv[])
{
	int i,n,j,m,b;char s[21];
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		b=1;
		scanf("%s",s);
		m=strlen(s);
		for (j=0;j<m;j++)
		{
		    if (j==0)
			if ((s[0]>='0')&&(s[0]<='9'))
			{
			    printf("no\n");
			    b=0;
			}
		    if (b==0) break;
		    if (((s[j]>='0')&&(s[j]<='9'))||((s[j]>='A')&&(s[j]<='Z'))||((s[j]>='a')&&(s[j]<='z'))||(s[j]=='_')) b=b+0;
			else
			{
				printf("no\n");
				b=0;
			}
			if (b==0) break;
		}
		if (b==1) printf("yes\n");
    }
	return 0;
}
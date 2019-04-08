void main()
{
	char s1[100],s2[100];
	int a1[100]={0},a2[100]={0};
	int l1,l2,i,j;
	int panding;
	panding=1;
	scanf("%s",&s1);
	scanf("%s",&s2);
	l1=strlen(s1);
	l2=strlen(s2);
	for (i=0;i<=l1-1;i++)
		for (j=0;j<=l1-1;j++)
			if ((s1[i]==s2[j])&&(a2[j]==0))
			{
				a2[j]=1;
				break;
			}
	for (i=0;i<=l1-1;i++)
		if (a2[i]==0) panding=0;
    if (l1!=l2) panding=0;
	if (panding==0) printf("NO");
		else printf("YES");
}



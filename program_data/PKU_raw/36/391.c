void main()
{
	char str1[101],str2[101];
	int a[26],b[26];
	int i,l,f;
	scanf("%s %s",str1,str2);
	if (strlen(str1)!=strlen(str2)) printf("NO\n");
	else
	{
		for (i=0;i<26;i++)
		{
			a[i]=0;
			b[i]=0;
		}
		l=strlen(str1);
		for (i=0;i<l;i++)
		{
			if ((str1[i]>='A')&&(str1[i]<='Z'))
				a[str1[i]-'A']=a[str1[i]-'A']+1;
			else b[str1[i]-'a']=b[str1[i]-'a']+1;
			if ((str2[i]>='A')&&(str2[i]<='Z'))
				a[str2[i]-'A']=a[str2[i]-'A']-1;
			else b[str2[i]-'a']=b[str2[i]-'a']-1;
		}
		f=1;
		for (i=0;i<26;i++)
			if ((a[i]!=0)||(b[i]!=0)) f=0;
		if (f==1) printf("YES\n");
		else printf("NO\n");
	}
}

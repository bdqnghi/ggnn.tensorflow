void main()
{
     char a[100][20];
	 int i,j,n,len[100],s[100];
	 scanf("%d",&n);
	 for (i=1;i<=n;i++)
	 {   
		 s[i]=0;
		 scanf("%s",a[i]);
		 len[i]=strlen(a[i]);
		 if (((a[i][0]>='A')&&(a[i][0]<='Z'))||((a[i][0]>='a')&&(a[i][0]<='z'))||(a[i][0]=='_'))
		 {   
			 s[i]=1;
			 for (j=1;j<len[i];j++)
			 {
				 if (((a[i][j]>='A')&&(a[i][j]<='Z'))||((a[i][j]>='a')&&(a[i][j]<='z'))||(a[i][j]=='_')||((a[i][j]>='0')&&(a[i][j]<='9')))
					 s[i]++;
			 }
		 }
	 }
	 for (i=1;i<=n;i++)
	 {
		 if (s[i]==len[i])
			 printf("yes\n");
		 if (s[i]!=len[i])
			 printf("no\n");
	 }
	 
}

main()
{
	int i,j,l,n,k=0,x=0;
   char s[100][21];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%s\n",s[i]);
   for(i=0;i<n;i++)
   {
	   k=0;x=0;
	   l=strlen(s[i]);
	   for(j=0;j<l;j++)
	   {
		   if(s[i][j]>='a'&&s[i][j]<='z')
		   k++;
		   else if(s[i][j]>='A'&&s[i][j]<='Z')
		   k++;
		   else if(s[i][j]=='_')
		   k++;
		   else if(s[i][j]>='0'&&s[i][j]<='9')
		   k++;
		}
		if(s[i][0]=='_')
		x++;
		else if(s[i][0]>='a'&&s[i][0]<='z')
		x++;
		else if(s[i][0]>='A'&&s[i][0]<='Z')
		x++;
		else if(s[i][0]=='_')
		x++;
		if(x==1&&k==l)
		printf("yes\n");
		else printf("no\n");
	}
}

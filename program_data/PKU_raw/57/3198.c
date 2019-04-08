main()
{
	char s[100];
	int i,j,k,x,n;
	scanf("%d",&n);
	for(x=0;x<n;x++)
	{
	scanf("%s",s);
	k=strlen(s);
	if(s[k-1]=='r'||s[k-1]=='y')
	k=k-2;
	else if(s[k-1]=='g')
	k=k-3;
	for(i=0;i<k;i++)
	printf("%c",s[i]);
	printf("\n");
}
}
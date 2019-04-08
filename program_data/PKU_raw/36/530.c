void main()
{
	char s1[100],s2[100],temp;
	int i,j,n;
	scanf("%s%s",s1,s2);
	n=strlen(s1)-1;
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			if(s1[j]>s1[j+1]){temp=s1[j+1];s1[j+1]=s1[j];s1[j]=temp;}
//			printf("%c",s1[j]);
		}
	}
//	printf("%s",s2);
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			if(s2[j]>s2[j+1]){temp=s2[j+1];s2[j+1]=s2[j];s2[j]=temp;}
		}
	}
//	printf("%c %s\n",s1[0],s2);
	if(strcmp(s1,s2)==0)printf("YES");
	else printf("NO");


}
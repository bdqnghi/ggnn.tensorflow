void main()
{
	int i;
	int j;
	char str1[50]={0};
	char str2[50]={0};
	char t[50]={0};
	int n1,n2;
	scanf("%s%s",str1,str2);
	n1=strlen(str1);
	n2=strlen(str2);
	for(i=0;i<=n2-n1;i++)
	{
		for(j=i;j<i+n1;j++)
			t[j-i]=str2[j];
		if(strcmp(str1,t)==0)
		{
			printf("%d\n",i);
			break;
		}
	}
}
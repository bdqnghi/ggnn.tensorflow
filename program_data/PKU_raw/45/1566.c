void main()
{
	char str1[50],str2[50],a,b;
	int i,j,n,l1,l2;
	j=0;
	scanf("%s %s",str1,str2);
	l1=strlen(str1);
	l2=strlen(str2);
	for(i=0;((a=str1[i])!='\0');i++)
	{
		for(;((b=str2[j])!='\0');j++)
		{
			if(a==b) {j=j+1;break;};
		}
	}
	printf("%d\n",j-l1);
}

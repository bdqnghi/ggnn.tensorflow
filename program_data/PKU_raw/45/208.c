void main()
{
	char a[50],b[50];
	int i,j;
	scanf("%s%s",a,b);
	i=0;j=0;
	while (a[i]!=0&&b[i]!=0)
		if (b[j]==a[i])
		{
			j++;
			i++;
		}
		else 
		{
			j++;
			i=0;
		}
	if (a[i]==0)
		printf("%d\n",j-i);
	else printf("no\n");
}



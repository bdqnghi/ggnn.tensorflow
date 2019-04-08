void main()
{
	char s[10000];
	int i,j=0,k=0,a[302],n;
	gets(s);
	for(i=0;s[i]!='\0';i++);
	n=i;
	s[n]=' ';
	for(i=0;i<=n;i++)
	{
		if(s[i]!=' ')
			j++;
		else if(s[i-1]!=' ')
		{
			a[k]=j;
			j=0;
			k++;
		}
	}
	printf("%d",a[0]);
	for(i=1;i<k;i++)
		printf(",%d",a[i]);
}
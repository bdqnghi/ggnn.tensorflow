void main()
{
	char a[3000]={""},c[50]={""};
	int i,j,k=0;
	gets(a);
	for(i=0;a[i]!='\0';)
	{
		if(a[i]==32) i++;
		else
		{
		for(j=0;a[i]!=32&&a[i]!='\0';i++,j++)
			c[j]=a[i];
		c[j]='\0';
		if(k==0)
			printf("%d",strlen(c));
		else printf(",%d",strlen(c));
		i++;
		k++;
		}
	}
}
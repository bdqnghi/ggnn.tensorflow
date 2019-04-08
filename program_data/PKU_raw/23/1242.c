void main()
{
	char a[101];
	gets(a);
    int i,l=strlen(a);
	int pos[100],j=0;
    for(i=0;i<l;i++)
	{
		if(a[i]==' ')
		{
			pos[j]=i;
			j++;
		}
	}
	pos[j]=l+1;
	if(j-1<0)printf("%s\n",a);
	else{
	int m,n;
	for(n=pos[j-1]+1;n<l;n++)
      printf("%c",a[n]);
	for(m=j-2;m>=0;m--)
		for(n=pos[m];n<pos[m+1];n++)
			printf("%c",a[n]);
		printf(" ");
	for(n=0;n<pos[0];n++)
        	printf("%c",a[n]);
	printf("\n");
	}
}

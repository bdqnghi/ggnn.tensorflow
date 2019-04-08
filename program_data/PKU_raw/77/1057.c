int main()
{
	char a[101],c;
	int l,sp=0,i,j=1,b[100];
	gets(a);
	l=strlen(a);
	c=a[0];
	b[0]=0;
	for(i=1;i<l-1;i++)
		if(a[i]==c)
			b[j++]=i;
		else printf("%d %d\n",b[--j],i);
	printf("0 %d",l-1);

	return 0;
}


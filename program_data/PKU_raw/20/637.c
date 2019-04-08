int seekmax(char a[])
{
	int k=0,i=1;
	while(a[i]!='\0')
	{
		if(a[i]>a[k])
			k=i;
		i++;
	}
	return k;
}
void insert(char a[],char b[],int k)
{
	int n,i;
	n=strlen(a);
	for(i=n;i>k;i--)
		a[i+3]=a[i];
	for(i=1;i<=3;i++)
		a[k+i]=b[i-1];
	printf("%s\n",a);
}
void main()
{
	int i=0,j=0;
	char a[15],b[4];
	while(scanf("%s%s",a,b)!=EOF)
		insert(a,b,seekmax(a));
}

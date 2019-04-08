void insert(char a[15])
{
	char m,c;
	int i,l=0,j,k;
    j=strlen(a);
	if(strlen(a)==0 || a[0]<33 || a[0]>126 ) return;
	m=0;
	for(i=0;i<j-4;i++)
		if(m<a[i])
		{
			m=a[i];l=i+1;
		}
		for(i=0;i<3;i++)
		{
			c=a[j-3+i];
			for(k=j-3+i;k>l+i;k--)
				a[k]=a[k-1];
			a[l+i]=c;
		}
		for(i=0;i<j-2;i++)
			printf("%c",a[i]);
		    printf("%c\n",a[j-2]);
}
void main()
{
	char b[50][15];
	int l=0,i;
	do
	{
		gets(b[l]);
		if(strlen(b[l])==0 || b[l][0]<33 || b[l][0]>126 ) break;
		l=l+1;
	}while(b[l-1][0]!='\0');
	for(i=0;i<l;i++)
		insert(b[i]);
}

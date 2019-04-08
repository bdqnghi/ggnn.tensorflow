int i,n,p,k;
char a[100],s[100][30];
void main()
{
	gets(a);
	n=strlen(a);
	p=0;
	k=0;
	for(i=0;i<n;i++)
	{	
		if(a[i]!=' ')
			s[k][p++]=a[i];
		else
		{
			s[k][p]=0;
			p=0;
			k++;
		}
	}
	for(i=k;i>0;i--)
		printf("%s ",s[i]);
	printf("%s\n",s[0]);
}

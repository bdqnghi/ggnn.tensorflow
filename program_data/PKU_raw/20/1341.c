int plug(char str[11],char substr[4])
{
	int i,j,t,c,n,a[11]={0,1,2,3,4,5,6,7,8,9};
	char p[11],q;
	n=strlen(str);
	strcpy(p,str);
	for(j=0;j<n-1;j++)
		for(i=0;i<n-1-j;i++)
			if(p[i]<p[i+1])
			{
				t=a[i];a[i]=a[i+1];a[i+1]=t;
				q=p[i];p[i]=p[i+1];p[i+1]=q;
			}
	c=a[0];
	for(i=0;i<=c;i++)
		printf("%c",str[i]);
	printf("%s",substr);
	for(i=c+1;i<n;i++)
		printf("%c",str[i]);
	printf("\n");
	return 0;
}
int main ()
{
	char str[11],substr[4];
	while(scanf("%s%s",str,substr)!=EOF)
	{
		plug(str,substr);
	}
	return 0;
}
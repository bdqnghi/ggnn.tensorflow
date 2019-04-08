int p,len1[100];
char ans[100][100];
void minus(char c[100],char d[100])
{
	int len2,i,j;
	char e[100];
	
	len1[p]=strlen(c);len2=strlen(d);
	for(i=0;i<len1[p];i++) e[i]='0';
	for(i=len1[p]-len2;i<len1[p];i++)
	{
		e[i]=d[i-len1[p]+len2];}	
	
	for(i=0;i<len1[p]-1;i++)
	{
		j=len1[p]-1-i;
		if(c[j]>=e[j]) ans[p][j]=c[j]-e[j]+'0';
		else {ans[p][j]=c[j]-e[j]+'0'+10;c[j-1]=c[j-1]-1;}
	}
	ans[p][0]=c[0]-e[0]+'0';
}

void main()
{
	int n,i,j,k;
	char a[100][100],b[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		scanf("%s",b[i]);}
	for(p=0;p<n;p++)
	{
		minus(a[p],b[p]);
		k=0;
	for(i=0;i<100;i++)
	{
		if(ans[p][i]=='0') k=k+1;
		else break;
	}
	for(j=k;j<len1[p];j++)
		printf("%c",ans[p][j]);
	printf("\n");
	}
	
}